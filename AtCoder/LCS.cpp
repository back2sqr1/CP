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
int n;
int main() {
    string s, t; cin>>s>>t;
    int a= s.length();
    int b= t.length();
    vector<vector<int>> dp(a+1, vector<int>(b+1, 0));
    for(int i=1; i<=a; i++)
    for(int j=1; j<=b; j++)
    {
    	if(s[i-1]==t[j-1])
    	{
    		dp[i][j]=dp[i-1][j-1]+s[i-1]+1;
		}
		else
		{
			dp[i][j]=(dp[i-1][j].length()>dp[i][j-1].length()? dp[i-1][j]:dp[i][j-1]);
		}
	}
	cout<<dp[a][b]<<endl;
}


