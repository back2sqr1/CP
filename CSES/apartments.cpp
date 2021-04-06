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
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    multiset<int> people, a;
    for(int i=0; i<n; i++)
    {
    	int num;
    	cin>>num;
    	people.insert(num);
	}
	for(int i=0; i<m; i++)
	{
		int num;
		cin>>num;
		a.insert(num);
	}
	auto j=a.begin(), x=people.begin();
	int ans=0;
	while(j!=a.end() && x!=people.end())
	{
	   // cout<<*x<<' '<<*j<<endl;
		int diff=abs(*j-*x);
		if(diff<=k)
		{
			x++;
			j++;
			ans++;
		}
		else 
		{
			if(*j<*x)
			j++;
			else
			x++;
		}	
	}
	cout<<ans<<endl;
}
