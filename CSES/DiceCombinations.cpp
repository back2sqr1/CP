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
const ll SZ=1e6+7;
ll dp[SZ];
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll n;
	cin>>n;
	dp[0]=dp[1]=dp[2]=dp[3]=dp[4]=dp[5]=0;
	dp[6]=1;
	for(int i=7; i<=n+6; i++)
	{
		dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%MOD;
	}
	cout<<dp[n+6]<<endl;
}

