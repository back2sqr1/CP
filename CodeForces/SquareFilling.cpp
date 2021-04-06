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
	int n, m; cin>>n>>m;
	bool zero=1;
	vector<vector<int>> v(n+1, vector<int>(m+1, 0)), v2(n+1, vector<int>(m+1, 0));
	F1R(i, n+1)
	F1R(j, m+1)
	{
		int a; cin>>a;
		v[i][j]=a;
		if(a==1)
		zero=0;
	}
	ll ans=0;
	vpi a;
	F1R(i, n)
	F1R(j, m)
	{
		if(v[i][j] && v[i][j+1] && v[i+1][j] && v[i+1][j+1])
		{
			ans++;
			a.pb(mp(i, j));
			v2[i][j]=1;
			v2[i][j+1]=1;
			v2[i+1][j]=1;
			v2[i+1][j+1]=1;
		}
	}
	bool good=1;
	F1R(i, n+1)
	F1R(j, m+1)
	{
		if(v[i][j]!=v2[i][j])
		{
			good=0;
			break;
		}
	}
	if(!good && !zero)
	{
		cout<<-1<<endl;
		return ;
	}
	cout<<ans<<endl;
	F0R(i, ans)
	{
		cout<<a[i].f<<' '<<a[i].s<<endl;
	}
}
int main() {
    FIO;
    solve();
}


