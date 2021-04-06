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
ll n;
vector<pair<int,int>> v; 
bool cmp(const pair<int,int> &a, const pair<int,int> & b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
int main() {
   //setIO("moop");
   cin>>n;
   for(int i=0; i<n; i++)
   {
		ll a, b;
		cin>>a>>b;
		v.pb(mp(a, b));
   }
   sort(all(v), cmp);
   ll ans=n;
   bool vis[n+1]={false};
   for(int i=0; i<n; i++)
   for(int j=i+1; j<n; j++)
   {
   		if(vis[j])
   		continue;
   		
   		
   		if(v[i].f<=v[j].f && v[i].s<=v[j].s)
   		{
   			vis[j]=1;
			ans--;   	
		}
   }
   cout<<ans<<endl;
}	
