#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
typedef long long ll; 
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
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
	int n; cin>>n;
	vi v(n);
	trav(x, v) cin>>x;
	vvi ans(n+1, vector<int>(n+1, 0));
	for(int i=1; i<=n; i++)
		ans[i][i]=v[i-1];
	for(int i=1; i<=n; i++)
	{
		int t=v[i-1]-1;
		int x=i, y=i;
		while(t--)
		{
			if(x-1>0 && ans[y][x-1]==0)
			{
				x--;
				ans[y][x]=v[i-1];
			}
			else if(y+1<=n && ans[y+1][x]==0)
			{
				y++;
				ans[y][x]=v[i-1];
			}
			else
			{
				cout<<-1<<endl;
				return ;
			}
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++)
		{
			cout<<ans[i][j]<<' ';
		}
		cout<<endl;
	}
}

int main() {
    FIO;
	solve();
}


