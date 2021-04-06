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
bool cmp(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
const int SZ=1001;
//bool box[SZ][SZ], vis[SZ][SZ];
void bfs()
{
	
}
void dfs(int node)
{
	
}
void check()
{
	
}
void solve()
{
	vpi b;
	int n; cin>>n;
	F0R(i, n)
	{
		int x1, y1; cin>>x1>>y1;
		b.pb(mp(x1, y1));
	}
	sort(all(b), cmp);
	//cout<<endl;
	int x, y; x=0; y=0;
	string str="";
	F0R(i, n)
	{
		if(b[i].s<y)
		{
			cout<<"NO"<<endl;
			return ;
		}
		int dX=b[i].f-x, dY=b[i].s-y;
	//	cout<<x<<' '<<y<<" diff:"<<dX<<' '<<dY<<endl;
		while(dX--) str+='R';
		while(dY--) str+='U';
		x=b[i].f; y=b[i].s;
	}
	cout<<"YES"<<endl<<str<<endl;
//	F0R(i,n)
//	cout<<b[i].f<<' '<<b[i].s<<endl;
//	cout<<endl;
}
int main() {
    FIO;
    ll t; cin>>t;
    while(t--)
    {
    	solve();
	}
}


