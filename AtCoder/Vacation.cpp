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
	int n; cin>>n;
	int v[n+1][3];
	for(int i=1; i<=n; i++) {
		int a, b, c; cin>>a>>b>>c;
		v[i][0]=a;
		v[i][1]=b;
		v[i][2]=c;
	}
	vector<vi> dp(n+1, vector<int>(3, 0));
	dp[0][0]=dp[0][1]=dp[0][2]=0;
	for(int i=1; i<=n; i++)
	for(int j=0; j<3; j++)
	{
		int x=(j+1)%3;
		int y=(j+2)%3;
		dp[i][j]=v[i][j]+max(dp[i-1][x], dp[i-1][y]);
	}
//	for(int i=0; i<=n; i++)
//	{
//		for(int j=0; j<3; j++)
//		cout<<dp[i][j]<<' ';
//		cout<<endl;
//	}
	cout<<max(dp[n][0], max(dp[n][1], dp[n][2]))<<endl;
}


