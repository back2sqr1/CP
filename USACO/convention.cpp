/*
	ID: theredh1
	LANG: C++
	PROG: ariprog
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define all(x) (x).begin(), (x).end()
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
void show(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}
void showrev(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[v.size()-i-1]<<" ";
    cout<<"\n";
}
void showarr(ll arr[],ll n)
{
    for(ll i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
struct Rect{
	int x1,y1,x2,y2;
	int area()
	{
		return (x2-x1)*(y2-y1);
	}
};
ll n, m, C, MIN=INT_MAX;
vector<int> v;
bool check(ll wait)
{
	int wagons = 1;
	int firstArrival = v[0];
	int firstIndex = 0;
	for(int i=1;i<n;i++)
	{
		if(v[i] - firstArrival > wait || i + 1 - firstIndex > C)
		{
			wagons += 1;
			firstArrival = v[i];
			firstIndex = i;
		}
	}
	return (wagons <= m);
}
int main() {
    setIO("convention");
    cin>>n>>m>>C;
    for(int i=0; i<n; i++)
    {
    	int x;
    	cin>>x;
    	v.pb(x);
	}
	sort(all(v));
	ll small=0, big=1e9, ans=0;
	while(small!=big)
	{
		ll mid=small+(big-small)/2;
		if(check(mid))
		{
			big=mid;
		}
		else
		{
			small=mid+1;
		}
	}
	cout<<small<<endl;
}
