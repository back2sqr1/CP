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
ll sum(vll a, vll b)
{
	ll ans=0;
	for(int i=0; i<a.size(); i++)
	ans+=a[i]*b[i];
	
	return ans;
}
void solve()
{
	int n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (auto& x : a) cin >> x;
  for (auto& x : b) cin >> x;
  vector<ll> pr(n + 1, 0);
  for (int i = 0; i < n; ++i)
    pr[i + 1] = pr[i] + a[i] * b[i];
  ll ans = pr[n];
  for (int c = 0; c < n; ++c) {
    ll cur = a[c] * b[c];
    for (int l = c - 1, r = c + 1; l >= 0 && r < n; --l, ++r) {
      cur += a[l] * b[r];
      cur += a[r] * b[l];
      ans = max(ans, cur + pr[l] + (pr[n] - pr[r + 1]));
    }
    cur = 0;
    for (int l = c, r = c + 1; l >= 0 && r < n; --l, ++r) {
      cur += a[l] * b[r];
      cur += a[r] * b[l];
      ans = max(ans, cur + pr[l] + (pr[n] - pr[r + 1]));
    }
  }
  cout << ans << endl;
	
}

int main() {
    FIO;
//    int t; cin>>t;
//    while(t--)
	solve();
}


