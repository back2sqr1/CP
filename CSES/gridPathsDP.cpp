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
const int SZ=1e6+1;
int main() {
	ll n;
	cin>>n;
	string g[n];
	for(int i=0; i<n; i++)
	{
		cin>>g[i];
	}
	vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
	dp[0][1]=1;
	for(int i=1; i<=n; i++)
	for(int j=1; j<=n; j++)
	{
		if(g[i-1][j-1]!='*')
		dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
	}
	cout<<dp[n][n]<<endl;
}

