#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
typedef long long ll; 
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
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
	mark[node]=1;
	//for(int i=0; i<4; i++) cout<<mark[i]<<' '; cout<<endl;
	
	trav(x, g[node])
	if(!mark[x])
		dfs(x);
}

void check()
{
	
}
void solve()
{
	int n; string a, b; cin>>n>>a>>b;
	fill(mark, mark+20, 0);
	g.clear();
	g.resize(SZ);
	for(int i=0; i<n; i++)
	{
		if((a[i]-'a')>(b[i]-'a'))
		{
			cout<<-1<<endl;
			return;
		}
		//cout<<(a[i]-'a')<<' '<<(b[i]-'a')<<endl;
		g[(a[i]-'a')].pb((b[i]-'a'));
		g[(b[i]-'a')].pb((a[i]-'a'));
		
	}
	int ans=20;
	for(int i=0;i<20; i++){
		
		if(!mark[i])
		{
			dfs(i);
			ans--;
			//cout<<ans<<' '<<i<<endl;
		}
	}
	cout<<ans<<endl;
}

int main() {
    FIO;
    int t; cin>>t;
    while(t--)
	solve();
}


