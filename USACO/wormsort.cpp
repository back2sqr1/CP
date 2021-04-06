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
const int SZ=1e5+1;
ll n, m, lowest=0; 
vpi adj[SZ];
vi p, component(SZ); 
bool vis[SZ];
void dfs (int v, int label, int minW) {
    component[v] = label;

    for (auto x: adj[v]) {
        if (x.second < minW || component[x.first] != -1) continue;
        dfs (x.first, label, minW);
    }
}
bool check(ll minW)
{
	fill (component.begin(), component.end(), -1);
    int label = -1;

    for (int i = 0; i < n; i++) {
        if (component[i] != -1) continue;
        dfs(i+1, ++label, minW);
    }

    for (int i = 0; i < n; i++) {
        if (component[i+1] != component[p[i]]) return false;
    }

    return true;
}
int main() {
   setIO("wormsort");
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		ll a; cin>>a; p.pb(a);
	}
	for(int i=0; i<m; i++)
	{
		ll a, b, c; cin>>a>>b>>c;
		adj[a].pb(mp(b, c));
		adj[b].pb(mp(a, c));
	}
	ll lo=1, hi=1e9+1, res=-1;
	while(lo<=hi)
	{
		ll mid=lo+(hi-lo)/2;
		if(check(mid))
		{
			lo=mid+1;
			res=fmax(res, mid);
		}
		else
		{
			hi=mid-1;
		}
	}
	cout<<(res==1e9+1?-1:res)<<endl;
}
