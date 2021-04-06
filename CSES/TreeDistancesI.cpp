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
int n, d[2][MX], ans[MX];
vi adj[MX];
int dfs(int node, int depth, int p, int i)
{
	d[i][node]=depth;
	int ans=-1;
	trav(v, adj[node])
	{
		if(v==p)
		continue;
		int x=dfs(v, depth+1,  node, i);
		if(ans==-1 || d[i][x]>d[i][ans])
		ans=x;
	}
	return ans==-1?node:ans;
}
int main() {
	cin>>n;
	for(int i=0; i<n-1; i++)
	{
		int p, q; 
		cin>>p>>q;
		p--; q--;
		adj[p].pb(q);
		adj[q].pb(p);
	}
	int a=dfs(0,0,0,0);
	int b=dfs(a,0, a,0);
	dfs(b,0,b,1);
	for(int i=0; i<n; i++)
	{
		cout<<max(d[0][i], d[1][i])<<' ';
	}
	cout<<endl;
}
