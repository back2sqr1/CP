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
const ll MOD= 1e9+7;
const int SZ=1e5+1;
vi cows;
int r(int n, int k)
{
	vi dp(n+1,0);
	dp[0]=cows[0];
	for(int i=1; i<n; i++)
	{
		int mx=0;
		for(int j=i; j>=0 && abs(i-j+1)<=k; j--)
		{
			mx=max(mx, cows[j]);
			if(j==0)
			dp[i]=max(dp[i], mx*(i+1-j));
			else
			dp[i]=max(dp[i], dp[j-1]+mx*(i+1-j));		
		}
	}
//	for(int i=0; i<n; i++)
//	{
//		cout<<dp[i]<<' ';
//	}
	return dp[n-1];
}
int main() {
	setIO("teamwork");
	int n, k; cin>>n>>k;
	for(int i=0; i<n; i++)
	{
		int a=0;
		cin>>a;
		cows.pb(a);
	}
	cout<<r(n, k)<<endl;
}

