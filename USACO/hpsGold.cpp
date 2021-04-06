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
int dp[SZ][21][4];
int main() {
//	setIO("hps");
	int n, k;
	cin>>n>>k;
	vector<int> hps;
	for(int i=0; i<n; i++)
	{
		char a;
		cin>>a;
		int b=0;
		if(a=='H') b=0;
		if(a=='P') b=1;
		if(a=='S') b=2;
		
		hps.pb(b);	
	}

	for(int i=0; i<=n; i++)
	{
		dp[i][0][0]=0;
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<=k; j++)
		{
			for(int l=0; l<3; l++)
			{
				if(j==0)
				dp[i][j][l]+=dp[i-1][j][l];
				else
				dp[i][j][l]=fmax(dp[i-1][j][l], fmax(dp[i-1][j-1][(l+1)%3], dp[i-1][j-1][(l+2)%3]));				
				
				if(l==hps[i-1])
				dp[i][j][l]++;
			//	cout<<dp[i][j][l]<<' ';
				
			}
		//	cout<<endl;
		}
	//	cout<<endl;
	}
	cout<<fmax(dp[n][k][0], fmax(dp[n][k][1], dp[n][k][2]))<<endl;
}

