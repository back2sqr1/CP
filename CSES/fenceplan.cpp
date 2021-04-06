/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

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
const ll MOD= 1e9+7;
const int SZ=1e5+1;
ll n, m;
vector<int> adj[SZ];
bool vis[SZ];
vector<pair<int,int>> cords;
ll x, x2, y, y2;
void dfs(int node)
{
	vis[node]=1;
	x=fmin(x, cords[node].f);
	x2=fmax(x2, cords[node].f);
	y=fmin(y, cords[node].s);
	y2=fmax(y2, cords[node].s);
	
	for(auto x: adj[node])
	{
		if(!vis[x])
		dfs(x);
	}
}
ll per()
{
	ll a= 2* (x2-x) + 2* (y2-y);
//	cout<<a<<endl;
	x=INT_MAX, x2=INT_MIN, y=INT_MAX, y2=INT_MIN;
	return a;
}
int main() {
	setIO("fenceplan");
	cin>>n>>m;
	x=INT_MAX, x2=INT_MIN, y=INT_MAX, y2=INT_MIN;
	cords.pb(mp(0,0));
	for(int i=0; i<n; i++)
	{
		ll a, b;
		cin>>a>>b;
		cords.pb(mp(a,b));
	}
	for(int i=0; i<m; i++)
	{
		ll a, b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	ll ans=INT_MAX;
	for(int i=1; i<=n; i++)
	{
		if(!vis[i])
		{
//			cout<<i<<endl;
			dfs(i);
			ans=fmin(ans, per());	
		}
	}
	cout<<ans<<endl;
}

