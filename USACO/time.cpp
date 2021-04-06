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
vi values(1001);
vi adj[1001];
vector<vi> dp(1001, vector<int>(1001, -1));
int res=0;
const int MX=32;
int n, m, c; 
int main() {
    setIO("time");
    cin>>n>>m>>c;
    for(int i=0; i<n; i++)
    cin>>values[i];
    for(int i=0; i<m; i++)
    {
    	int a, b; cin>>a>>b;
    	a--; b--;
    	adj[b].pb(a);
	}
	dp[0][0]=0;
	for(int i=1; i<=1000; i++)
	{
		for(int j=0; j<n; j++)
		{
			trav(x, adj[j])
			{
				if(dp[i-1][x]<0)
				continue;
				
				dp[i][j]=max(dp[i][j], dp[i-1][x]+values[j]);
			}
		}
	}
	int res=0;
	for(int i=0; i<=1000; i++)
	res=max(res, dp[i][0]-c*i*i);
	
	cout<<res<<endl;
}


