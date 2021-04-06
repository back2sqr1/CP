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
bool cmp(const pair<pair<int,int>,int>&a, const pair<pair<int,int>,int> &b)
{
	return a.s>b.s;
}
bool cmp2(const pair<pair<int,int>,int>&a, const pair<pair<int,int>,int> &b)
{
	return a.f.s>b.f.s;
}
const int SZ=100001;
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
int main() {
    FIO;
    setIO("mootube");
   	int n, q; cin>>n>>q;
	vector<pair<pair<int,int>,int>> queries, edges;
   	F0R(i, n-1)
   	{
   		ll a, b, c; cin>>a>>b>>c;
		edges.pb(mp(mp(a, b), c));	
	}
	F0R(i, q) // v,i, k
	{
		ll a, b; cin>>a>>b;
		queries.pb(mp(mp(b, i), a));
	}
	sort(all(queries), cmp);
	sort(all(edges), cmp);
	DSU d; d.init(n+1);
	
//	cout<<endl;
//	for(int i=0; i<n-1; i++)
//		cout<<edges[i].f.f<<' '<<edges[i].f.s<<' '<<edges[i].s<<endl;
//	for(int i=0; i<q; i++)
//		cout<<queries[i].f.f<<' '<<queries[i].f.s<<' '<<queries[i].s<<endl;
//	cout<<endl;
	int ans[q];
	fill(ans, ans+q, 0);
	int j=0;
	F0R(i, q)
	{
		while(edges[j].s>=queries[i].s)
		{
			d.unite(edges[j].f.f, edges[j].f.s);
			j++;
		}
		ans[queries[i].f.s]=d.size(queries[i].f.f)-1;		
	}	
	F0R(i, q)
	{
		cout<<ans[i]<<endl;
	}
}


