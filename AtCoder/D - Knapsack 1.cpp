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

ll binpow(ll x, ll n, ll m) {
    assert(n >= 0);
    x %= m; //note: m*m must be less than 2^63 to avoid ll overflow
    ll res = 1;
    while (n > 0) {
        if (n % 2 == 1) //if n is odd
            res = res * x % m;
        x = x * x % m;
        n /= 2; //divide by two
    }
    return res;
}
int main() {
    FIO;
	int n, w; cin>>n>>w;
	vector<vector<ll>> dp(n+1, vector<ll>(w+1, 0));
	vpi v(n+1);
	for(int i=1; i<=n; i++)
	cin>>v[i].f>>v[i].s;
	for(int i=1; i<=n; i++)
	for(int j=1; j<=w; j++)
	{
		dp[i][j]=dp[i-1][j];
		if(j-v[i].f>=0)
		dp[i][j]=max(dp[i][j], dp[i-1][j-v[i].f]+v[i].s);
				
	}
//	for(int i=1; i<=n; i++){
//	for(int j=1; j<=w; j++)
//	{
//		cout<<dp[i][j]<<' ';
//	}
//	cout<<endl;
//	}
	cout<<dp[n][w]<<endl;
}


