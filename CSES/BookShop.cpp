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
	ll n, x;
	cin>>n>>x;
	vector<vector<int>> dp(n+1,vector<int>(x+1, 0));
	vector<pair<int,int>> v(n);
	for(int i=0; i<n; i++) cin>>v[i].f;
	for(int j=0; j<n; j++) cin>>v[j].s;
	
	//prices-first, pages-second 
//	sort(all(prices), greater<pair<int,int>>());
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<=x; j++)
		{
			dp[i][j]=dp[i-1][j];
			if(j-v[i-1].f>=0)
			{
				dp[i][j]=fmax(dp[i][j], dp[i-1][j-v[i-1].f]+v[i-1].s);
			}
		}
	}
	cout<<dp[n][x]<<endl;
}

