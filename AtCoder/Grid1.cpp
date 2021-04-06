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
    int h, w;
    cin>>h>>w;
    char a[h+1][w+1];
    for(int i=1; i<=h; i++)
    for(int j=1; j<=w; j++)
    cin>>a[i][j];
    
    vector<vi> dp(h+1, vector<int>(w+1, 0));
    dp[1][1]=1;
    for(int i=1; i<=h; i++)
    {
    	for(int j=1; j<=w; j++)
    	{
    		if(a[i][j]=='#')
    		continue;
    		
    		if(a[i-1][j]!='#')
    		dp[i][j]+=(dp[i-1][j])%MOD;
    		if(a[i][j-1]!='#')
    		dp[i][j]+=(dp[i][j-1])%MOD;
    		
    		dp[i][j]%=MOD;
		}
	}
//	for(int i=0; i<=h; i++){	
//	for(int j=0; j<=w; j++)
//	{
//		cout<<dp[i][j]<<' ';
//	}
//	cout<<endl;
//	}
	cout<<dp[h][w]<<endl;
}


