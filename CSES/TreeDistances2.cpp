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
const int MX=2e5+1;
int n;
ll sum[MX], dist[MX];
vi adj[MX];
void dfs(int v=1, int u=0, int d=0)
{
	dist[1]+=d;
	sum[v]=1;
	trav(x, adj[v])
	{
		if(x==u) continue;
		dfs(x, v, d+1);
		sum[v]+=sum[x];
	}
}
void dfs2(int v=1, int u=0)
{
	trav(x, adj[v])
	{
		if(x==u) continue;
		dist[x]=dist[v]+n-2*sum[x];		
		dfs2(x, v);
	}	
}
int main() {
	cin>>n;
	memset(sum , 0, MX);
	for(int i=0; i<n-1; i++)
	{
		int p, q; 
		cin>>p>>q;
		adj[p].pb(q);
		adj[q].pb(p);
	}
	ll s=0;
	dfs();
	dfs2();
	for(int i=1; i<=n; i++)
	cout<<dist[i]<<' ';
	
}
