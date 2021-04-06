/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<pair<int,int>> vpi;

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
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
ll p=-1, c=-1;
bool adj[105][105];
bool vis[105];
void dfs(int node)
{
	vis[node]=1;
	for(int i=0; i<100; i++)
	{
		if(adj[node][i] && !vis[i])
		dfs(i);
	}
}
int main() {
	while(cin>>p>>c && (p||c))
	{
		memset(adj, false, sizeof(adj));
	    vector<pair<int,int>> edges;
	    for (int i = 0; i < c; i++) {
	        int u, v; 
	        cin >> u >> v;
	        adj[u][v] = true;
	        adj[v][u] = true;
	        edges.pb(mp(u, v));
	    }
	    bool bad=0;
	    for (pair<int,int> x : edges) {
	        adj[x.f][x.s] = false;
	        adj[x.s][x.f] = false;
	        memset(vis, false, sizeof(vis));
	        dfs(0);
	        for (int i = 0; i < p; i++) {
	            if (!vis[i]) {
	                cout << "Yes" << '\n';
	                bad=1;
	                break;
	            }
	        }
	        adj[x.f][x.s] = true;
	        adj[x.s][x.f] = true;
	        if(bad)
	        break;
	    }
	    if(!bad)
	    cout << "No" << '\n';
	}
}

