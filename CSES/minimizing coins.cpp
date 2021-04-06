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
int main() {
	ll n, x;
	cin>>n>>x;
	vector<int> v;
  vector<int> dp(x+1,1e9);
//	for(int i=0; i<x+1; i++)
//	cout<<dp[i]<<endl;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		v.pb(a);
	}
	dp[0]=0;
	for(int i=1; i<=x; i++)
	for(int j=0; j<n; j++)
	{
		if(i-v[j]>=0)
		dp[i]=fmin(dp[i],dp[i-v[j]]+1);	
		
	//	cout<<dp[i]<<' '<<i<<endl;
	}
	cout<<(dp[x]==1e9 ? -1: dp[x])<<endl;
}

