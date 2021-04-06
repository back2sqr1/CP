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
ll n; 
vi adj[SZ];
vpi cords;
bool vis[1001];
void dfs(int node)
{
	vis[node]=1;
	trav(x, adj[node])
	{
		if(!vis[x])
		dfs(x);
	}
}
bool check(ll M)
{
	for(int i=0; i<n; i++)
	{
		memset(vis, 0 , 1001);
		adj[i].clear();
	}
	for(int i=0; i<n; i++)
	for(int j=0; j<i; j++)
	{
		int x1=cords[i].f, x2=cords[j].f, y1=cords[i].s, y2=cords[j].s;
		ll a=(abs(x2-x1)*abs(x2-x1)) + (abs(y2-y1)*abs(y2-y1));
		if(a<=M)
		{
			adj[i].pb(j);
			adj[j].pb(i);
		}	
	}
	dfs(0);
	for(int i=0; i<n; i++)
	{
		if(!vis[i])
		return false;
	}
	return true;
}
int main() {
   setIO("moocast");
   cin>>n;
   ll lo=0, hi=625000000, res=1e9;
   for(int i=0; i<n; i++)
   {
		int a,b; cin>>a>>b;
		cords.pb(mp(a, b));
   }
   while(lo<=hi)
   {
   		ll mid=lo+(hi-lo)/2;
   		if(!check(mid))
   		{
   			lo=mid+1;	
		}
		else
		{
			res=fmin(res, mid);
			hi=mid-1;
		}
   }
   cout<<res<<endl;
}
