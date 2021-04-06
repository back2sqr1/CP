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
vector<int> adj[3001];
bool closed[3001], visited[3001];
void dfs(int node)
{
	visited[node]=1;
	for(auto x: adj[node])
	{
		if(!visited[x] && !closed[x])
		dfs(x);
	}
}
bool check()
{
	for(int i=1; i<=n; i++)
	{
		if(!visited[i] && !closed[i])
		return false;
	}
	return true;
}
int main() {
	setIO("closing");
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		ll a, b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	vector<int> c;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		c.pb(a);
	}
	for(int i=0; i<n; i++)
	{
		dfs(c[i]);
		cout<<(check()? "YES": "NO")<<endl;
		memset(visited, false, n+1);
		closed[c[i]]=1;
	}
}

