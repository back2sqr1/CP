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
	string a, b;
	cin>>a>>b;
	ll n=a.size(), m=b.size();
	vector<vector<int>> dp(n+1, vector<int>(m+1, 1e9));
	dp[0][0]=0;
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=m; j++)
		{
			if(i)
			{
				dp[i][j]=fmin(dp[i][j],dp[i-1][j]+1);
			}
			if(j)
			{
				dp[i][j]=fmin(dp[i][j], dp[i][j-1]+1);
			}
			if(i&&j)
			{
				dp[i][j]=fmin(dp[i][j], dp[i-1][j-1]+(a[i-1]!=b[j-1]));
			}
			
		}
	}
	cout<<dp[n][m]<<endl;
}

