#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
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
const int MOD= 1e9+7, SZ=2e5;
int dp[SZ]={0};
void solve()
{
	int n, m; cin>>n>>m;
	int ans=0;
	while(n>0)
	{
		int x=n%10;
		ans+=((m+x<10)?1:dp[m+x-10]);
		ans%=MOD;
		n/=10;
	}
	cout<<ans<<endl;
}
int main() {
    FIO;
    for(int i=0; i<9; i++)dp[i] = 2;
    dp[9] = 3;
    for(int i=10; i<2e5; i++){
        dp[i] = (dp[i-9] + dp[i-10])%MOD;
    }

    //testcases
    int t; cin>>t;
    while(t--){
    	solve();
	}
}


