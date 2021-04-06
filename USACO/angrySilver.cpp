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
vector<int> v;
ll n, k;
//bool arr[n];
bool check(ll c)
{
	ll ks=1, start=v[0];
	for(int i=0; i<n; i++)
	{
		if(ks>k)
		return false;

		if(v[i]-start>c*2)
		{
			start=v[i];
			ks++;
		}
	}
	return ks<=k;
}
int main() {
    setIO("angry");
   // memset(arr, false, n );
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
    	int x;
    	cin>>x;
    	v.pb(x);
	}
	sort(all(v));
    ll small=0, big=n;
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
