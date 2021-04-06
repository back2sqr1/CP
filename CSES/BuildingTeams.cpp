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
ll n, m;
bool vis[MN], bad=false;
int color[MN];
vector<int> adj[MN];
void dfs(int node=1, int c=0)
{
	vis[node]=true;
	color[node]=c;
	for(auto N: adj[node])
	{
		if(vis[N])
		{
			if(color[N]==c)
			{
				bad=true;
			}
		}
		else
		{
			if(c==1)
				dfs(N, 0);
			else
				dfs(N, 1);
		}
	}
}
int main() {
	//setIO("split");
	cin>>n>>m;
//	memset(vis, false, n+1);
//	memset(color, 0, n+1);
	for(int i=0; i<m; i++)
	{
		ll a, b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	for(int i=1; i<=n && !bad; i++)
	{
		if(!vis[i])
		dfs(i);
	}
	
	if(bad)
	cout<<"IMPOSSIBLE"<<endl;
	else
	{
		for(int i=1; i<n; i++)
		{
			cout<<color[i]+1<<' ';
		}
		cout<<color[n]+1<<endl;
	}
}

