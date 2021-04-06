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
	ll n;
	cin>>n;
	vector<int> v;
	v.pb(0);
	ll sum=0;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		v.pb(a);
		sum+=a;
	}
	
	vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
	
	dp[0][0]=1;
	
	ll ans=0;
	set<int> vans;
	for(int i=1; i<=n; i++)
	for(int j=0; j<sum+1; j++)
	{
		dp[i][j]=dp[i-1][j];
		if(j-v[i]>=0 && dp[i-1][j-v[i]])
		dp[i][j]=1;
		
		if(j!=0 && dp[i][j] && !vans.count(j))
		{
			//cout<<i<<' '<<j<<' '<<i-1<<' '<<j-v[i]<<endl;
			ans++;
			vans.insert(j);
		}
	}

	cout<<ans<<endl;
	for(auto x: vans)
	cout<<x<<' ';
	cout<<endl;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<sum+1; j++)
		{
			cout<<dp[i][j]<<' ';
		}
		cout<<endl;
	}
	for(int i=0; i<sum+1; i++)
	cout<<i<<' ';
}

