/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
const ll MOD= 1e9+7;
const int SZ=1e5+1;
int main() {
	ll n, m;
	cin>>n>>m;
	vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
	int zero;
	cin>>zero;
	if(zero==0)
	{
		for(int j=0; j<=m; j++)
		dp[0][j]=1;
	}
	else
	dp[0][zero]=1;
	for(int i=1; i<n; i++)
	{
		ll b; cin>>b;
		if(b==0)
		{
			for(int j=1; j<=m; j++)
			{
				for(int a: {j-1, j, j+1})
				{
					if(a>=1 && a<=m)
					{
						dp[i][j]=(dp[i][j]+dp[i-1][a])%MOD;
					}
				}
			}
		}
		else
		{
			for(int a:{b-1, b, b+1})
			{
				if(a>=1 && a<=m)
				{
					dp[i][b]=(dp[i][b]+dp[i-1][a])%MOD;
				}
			}
		}
	}
	ll ans=0;
	for(int i=1; i<=m; i++)
	{
		(ans+=dp[n-1][i])%=MOD;
	}
	cout<<ans<<endl;
}

