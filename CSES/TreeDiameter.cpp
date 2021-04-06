#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef long long ll; 
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define pb push_back
ll n;
const int MX=2e5+1;
vi adj[MX];
bool vis[MX];
vpi res;
void dfs(int node, int d=0)
{
	vis[node]=1;
	res.pb(mp(d, node));
	//cout<<d<<' '<<node<<endl;
	//cout<<node<<' '<<d<<endl;
	trav(x, adj[node])
	{
		if(!vis[x])
		dfs(x, d+1);	
	}
}
int main() {
	cin>>n;
	memset(vis, 0, n+1);
	F0R(i,n-1)
	{
		ll a, b; cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	int ans=0;
	dfs(1);
	sort(all(res));
	int a=res[res.size()-1].s;
	res.clear();
	memset(vis, 0, n+1);
	dfs(a);
	sort(all(res));
	cout<<res[res.size()-1].f<<endl;
	
}
