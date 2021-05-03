#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
typedef long long ll; 
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
typedef vector<vector<long long>> vvll; 
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
        freopen((name+".txt").c_str(), "r", stdin); 
        freopen((name+"-23.txt").c_str(), "w", stdout);
    }
}
bool cmp(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
int ans=0;
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
	void show(){ for(int i: e) cout<<i<<' '; cout<<endl;}
};
const int SZ=20;	
void bfs()
{
	
}
bool mark[SZ]={0};
vvi g(SZ);
void dfs(int node)
{	
	
}

void check()
{

}
void solve()
{
	ll n; cin>>n;
	vll u(n), ps(n);
	ll sum=0;
	trav(x, u) cin>>x;
	trav(x, ps) cin>>x, sum+=x;
	
	vvll v(n);
	for(int i=0; i<n; i++) v[u[i]-1].pb(ps[i]);
	for(int i=0;i<n; i++) sort(all(v[i]), greater<int>());
	vvll pre(n, vector<long long>(1,0));
	
	for(int i=0; i<n; i++)  trav(x, v[i]) pre[i].pb(pre[i].back()+x);
	
	vll ans(n);
	for(int i=0; i<n; i++)
	for(int k=1; k<=sz(v[i]); k++)
	{
		ans[k-1]+=pre[i][sz(v[i])/k*k];
	}
	for(int i=0; i<n; i++)
	{
		printf("%lld ", ans[i]);
	}
	puts("");
}

int main() {
    FIO;
    int t; cin>>t;
    while(t--)
	solve();
}


