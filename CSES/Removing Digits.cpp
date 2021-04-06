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
const int SZ=1e6+1;
vector<int> dig(ll n)
{
	vector<int> v;
	while(n>0)
	{
		v.pb(n%10);
		n/=10;
	}
	return v;
}
int main() {
	ll n;
	cin>>n;
	vector<int> dp(n+1, 1e9);
	dp[0]=0;
	for(int i=1; i<=n; i++)	
	{
		for(char c: to_string(i))
		{
			if(i-(c-'0')>=0)
			dp[i]=fmin(dp[i],dp[i-(c-'0')]+1);
		}
	}
	cout<<dp[n]<<endl;
}

