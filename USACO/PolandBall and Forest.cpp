/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
const int SZ=1e4+1;

vector<ll> children[SZ];
//int subtree_size[SZ], depth[SZ];
bool vis[SZ];
ll n;
void dfs(int node) {
    vis[node]=1;
    for(auto n: children[node])
    {
    	if(!vis[n])
    	dfs(n);
	}
}
int main() {
	//setIO("split");
	cin>>n; 
	memset(vis, false, n+1);
	for(int i=1; i<=n; i++)
	{
		ll a;
		cin>>a;
		children[i].pb(a);
		children[a].pb(i);
	}
	ll ans=0;
	for(int i=1; i<=n; i++)
	{
		if(!vis[i])
		{
			dfs(i);
			ans++;
		}
	}
	cout<<ans<<endl;
}

