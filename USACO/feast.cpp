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
const int SZ=5e6+1;
int main() {
	setIO("feast");
	ll t, a, b;
	cin>>t>>a>>b;
	vector<vector<int>> dp(t+1, vector<int>(2, 0));
	ll ans=0;
	for(int j=0; j<2; j++)
	{
		for(int i=0; i<=t; i++)
		{
			if(i==0 || dp[i][j]!=0)
			{
				if(i+a<=t)
				{
					dp[i+a][j]=dp[i][j]+a;
					ans=fmax(ans, dp[i+a][j]);
				}
				if(i+b<=t)
				{
					dp[i+b][j]=dp[i][j]+b;
					ans=fmax(ans, dp[i+b][j]);
				}
				
				if(j==0)
				{
					dp[i/2][1]=i/2;
				}
			}
		}
	}
	cout<<ans<<endl;
}

