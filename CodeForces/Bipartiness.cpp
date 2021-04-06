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
const int MN= 1e5+10;
ll n;
bool vis[MN], bad=false;
bool color[MN];
set<int> adj[MN];
ll l=0, r=0;
void dfs(int node=1, bool c=0)
{
	vis[node]=true;
	color[node]=c;
	for(auto N: adj[node])
	{
		if(!vis[N])
		{
			if(c==1)
				dfs(N, 0);
			else
				dfs(N, 1);
		}
	}
	if(c)
	l++;
	else
	r++;
}
int main() {
	//setIO("split");
	cin>>n;
//	memset(vis, false, n+1);
//	memset(color, 0, n+1);
	for(int i=0; i<n-1; i++)
	{
		ll a, b;
		cin>>a>>b;
		adj[a].insert(b);
		adj[b].insert(a);
	}
	for(int i=1; i<=n; i++)
	{
		if(!vis[i])
		dfs(i);
	}
	ll ans=0;
	
	cout<<l*r-(n-1)<<endl;
}

