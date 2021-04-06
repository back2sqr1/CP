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
#pragma once
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
bool cmp(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
const int MOD=1e9+7;
const int SZ=2e5+1;
void solve()
{
	int n; cin>>n;
	vi dp(SZ), cnt(SZ);
	fill(all(dp), 0);
	fill(all(cnt), 0);
	F0R(i, n)
	{
		int x;
		cin>>x;
		cnt[x]++;
	}
	for(int i=1; i<=SZ; i++)
	{
		dp[i]+=cnt[i];
		for(int j=i*2; j<=SZ; j+=i)
		{
			dp[j]=max(dp[j], dp[i]);
		}
	}
	cout<<(n-*max_element(all(dp)))<<endl;
}
int main() {
   //setIO("wormsort");
   int t; cin>>t;
   while(t--)
   {
   		solve();
   }
}
