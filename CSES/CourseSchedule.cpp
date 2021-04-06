#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef long long ll; 
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define F1R(i,a) FOR(i,1,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define pb push_back
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
struct DSU {
	vi e; void init(int N) { e = vi(N,-1); }
	int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); } 
	bool sameSet(int a, int b) { return get(a) == get(b); }
	int size(int x) { return -e[get(x)]; }
	bool unite(int x, int y) { // union by size
		x = get(x), y = get(y); if (x == y) return 0;
		if (e[x] > e[y]) swap(x,y);
		e[x] += e[y]; e[y] = x; return 1;
	}
};
ll n, m;
const int SZ= 1e5+1;
vi adj[SZ], ts;
bool vis[SZ];

void dfs(int node)
{
	trav(a, adj[node])
	{
		if(!vis[a])
		{
			vis[a]=1;
			dfs(a);
		}	
	}
	ts.pb(node);	
}
void compute(){
	for(int i=1; i<=n; i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			dfs(i);
		}
	}
	reverse(all(ts));
} 
int main() {
    cin>>n>>m;
    memset(vis, 0, SZ);
    for(int i=0; i<m; i++)
    {
    	int a, b; cin>>a>>b;
    	adj[a].pb(b);
	}
	compute();
	vi ind(n+1);
	for(int i=1; i<=n; i++) ind[ts[i-1]]=i;
	for(int i=1; i<=n; i++) 
	{
		for(int j: adj[i])
		{
			if(ind[j]<=ind[i])
			{
				cout<<"IMPOSSIBLE"<<endl;
				return 0;
			}
		}
	}
	for(int i: ts)
	cout<<i<<' ';
	cout<<endl;
}


