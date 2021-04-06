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
 
int main() {
    //setIO("cereal");
   ll n, m;
   cin>>n>>m;
   pair<int,int> c[n+1];
   bool avail[m+1];
   for(int i=1; i<=n; i++)
   {
   		ll a, b;
   		cin>>a>>b;
   	  	c[i]=mp(a, b);
    }
//   for(int i=1; i<=n; i++)
//   {
//	   for(int j=0; j<lines[i].size(); j++)
//	   {
//	   		cout<<lines[i][j]<<' ';
//	   }
//	   cout<<endl;
//   }
	for(int l=1; l<=n; l++)
	{
		ll a=0;
		memset(avail, true, m+1);
		for(int i=l; i<=n; i++)
		{
			if(avail[c[i].f] || avail[c[i].s])
			{
				if(avail[c[i].f])
					avail[c[i].f]=false;
				else if(avail[c[i].s])
					avail[c[i].s]=false;
				a++;	
			}
		}
		cout<<a<<endl;
	}
}	
