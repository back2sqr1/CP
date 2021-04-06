#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef long long ll; 
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define F1R(i,a) FOR(i,1,a)
#define ROF(i,a,b) for ( i = (b)-1; i >= (a); --i)
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
bool cmp(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
const int SZ=1001;
struct DSU {
    vi e; void init(int N) { e = vi(N,-1); }
    // get representive component, uses path compression
    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
    bool sameSet(int a, int b) { return get(a) == get(b); }
    int size(int x) { return -e[get(x)]; }
    bool unite(int x, int y) { // union by size
        x = get(x), y = get(y); if (x == y) return 0;
        if (e[x] > e[y]) swap(x,y);
        e[x] += e[y]; e[y] = x; return 1;
    }
};
int u[200010], v[200010], place[200010];
bool res[200010];
vector<int> adj[200010];
int arr[200010];
int main() {
    FIO;
    setIO("closing");
   	int n, m; cin>>n>>m;
   	DSU d; d.init(n+1);
	for(int i=0; i<m; i++)
   	{
   		cin>>u[i]>>v[i];	
	}
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		place[arr[i]]=i;
	}
	for(int i=0; i<m; i++)
	{
		if (place[u[i]] > place[v[i]]) adj[v[i]].push_back(u[i]);
        else adj[u[i]].push_back(v[i]);
	}
	int comps=0;
	for(int i=n-1; i>=0; i--)
	{
		int u=order[i]; comps++;
		trav(a, adj[u])
		{
			if(!d.sameSet(a, u))
			{
				d.unite(a, u);
				comps--;
			}
		}
		res[i]=(comps<=1);
	//	cout<<comps<<' '<<u<<endl;
	}
	F0R(i, n) if (res[i]) printf("YES\n"); else printf("NO\n");
}


