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
const int MOD= 1e9+7, SZ=1e5+1;
 
void solve(int n)
{
	vi a(n),b(n);
	trav(x, a) cin>>x;
	trav(x, b) cin>>x;
	vvi dp(n+1, vector<int>(n+1, 0));
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=n; j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=0;			
			}
			else if(a[i-1]==b[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else
			dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}

	cout<<dp[n][n]<<endl;
}
int main() {
    FIO;
    //testcases
    int n; cin>>n;
    solve(n);
}