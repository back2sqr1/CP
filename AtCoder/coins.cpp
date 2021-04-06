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
const int MOD= 1e9+7;
int main() {
    int n;
    cin>>n;
    vector<double> coins(n+1);
    for(int i=1; i<=n; i++)
    cin>>coins[i];
    vector<vector<double>> dp(n+1, vector<double>(n+1, 0));
    dp[0][0]=1;
    for(int i=1; i<=n; i++)
    {
    	double h=coins[i], t=1-coins[i];
    	dp[0][i]=t*dp[0][i-1];
    	for(int head=1; head<=i; head++)
    	{
    		dp[head][i]=h*dp[head-1][i-1]+t*dp[head][i-1];
		}
	}
	double res=0;
	for(int i=n/2+1; i<=n; i++)
	{
		res+=dp[i][n];
	}
	cout<<setprecision(9)<<res<<endl;
}


