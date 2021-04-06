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
const int MOD=1e9+7;
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
const int SZ=1001;
vi adj[SZ];
vpi dist[SZ];
void dfs(int v=1, int u=0, int d=0)
{
	
}
void solve()
{
	for(int i=0; i<SZ; i++)
	adj[i].clear();
	for(int i=0; i<SZ; i++)
	dist[i].clear();
	
	int n; cin>>n;
	for(int i=0; i<n-1; i++)
	{
		int a, b; cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	for(int i=1; i<=n; i++)
	{
		dfs(i);
	}
	int len=0;
	cout<<"? "<<n;
	for(int i=1; i<n; i++)
	cout<<i<<' ';
	cout<<n<<endl;
	cin>>len>>len;
	
}
int main() {
   //setIO("wormsort");
   int t=0; cin>>t;
   while(t--)
   {
   		solve();
   		string s;
   		cin>>s;
   		if(s=="Incorrect")
   		break;
   }
  	cout.flush();
}
