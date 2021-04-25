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
const int MOD= 1e9+7, SZ=1e7+100;
int ans[SZ], s[SZ]={0};
void div(int n)
{
	//sieve
	fill(ans, ans+SZ, -1);
	for(int i=1; i<1e7; i++)
	{
		for(int j=i; j<=1e7; j+=i)
		{
			s[j]+=i;
		}
		if(s[i]<=1e7)
		{
			if(ans[s[i]]==-1)
			ans[s[i]]=i;
		}
	}
}
void solve()
{
	int c; cin>>c;
	cout<<ans[c]<<endl;
}
int main() {
    FIO;
    //testcases
    div(SZ);
    int t; cin>>t;
    while(t--){
    	solve();
	}
}


