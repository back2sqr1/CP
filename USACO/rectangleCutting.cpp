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
	ll a, b;
	cin>>a>>b;
	vector<vector<int>> dp(a+1, vector<int>(b+1, 1e9));
	dp[0][0]=0;
	for(int i=1; i<=a; i++)
	for(int j=1; j<=b; j++)
	{
		if(i==j)
		dp[i][j]=0;
		else
		{
			for(int k=1; k<=fmax(i, j); k++)
			{

				dp[i][j]=fmin(fmin(dp[i][j], (i-k>=1? dp[k][j]+dp[i-k][j]+1: 1e9)), (j-k>=1?dp[i][k]+dp[i][j-k]+1:1e9));
			//	cout<<1+dp[i-k+x][j]<<' '<<dp[i][j-k+y]+1<<' '<<k<<endl;
			}
		}
	//cout<<dp[i][j]<<' '<<i<<' '<<j<<' '<<endl;
	}
	cout<<dp[a][b]<<endl;
}

