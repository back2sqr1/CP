#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
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
        freopen((name+".txt").c_str(), "r", stdin); 
        freopen((name+"-23.txt").c_str(), "w", stdout);
    }
}

void solve(){
	int a, x, y; cin>>a;
	vector<pair<double, int>> v;
	vpi xy;
	for(int i=0; i<a; i++)
	{
		cin>>x>>y;
		xy.pb(mp(x,y));
		double dist=sqrt(x*x+y*y);
		v.pb(mp(dist, i));
	}
	sort(all(v));
	for(pair<double, int> d: v)
	{
		cout<<xy[d.s].f<<' '<<xy[d.s].s<<endl;
	}
}
int main() {
    FIO;
	int t; cin>>t;
	while(t--)
	{
		solve();
	}
}

