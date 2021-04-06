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
vector<pair<int,char>> adj[MN];
ll l=0, r=0, ans=0;
void dfs(int node=1, bool c=0, bool first=0)
{
	vis[node]=true;
	color[node]=c;
	if(first)
	ans++;
	
	for(pair<int,char> x : adj[node])
	{
		if(vis[x.f])
		{
			if((color[x.f]==c && x.s=='D') ||(color[x.f]!=c && x.s=='S'))
			{
				bad=1;
			}
		}
		else
		{
			if(x.s=='S')
				dfs(x.f, c);
			else
				dfs(x.f, !c);
		}
	}
}
int main() {
	setIO("revegetate");
	ll n, m;
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		char c;
		ll a, b;
		cin>>c>>a>>b;
		adj[a].pb(mp(b,c));
		adj[b].pb(mp(a, c));
	}
	for(int i=1; !bad && i<=n; i++)
	{
		if(!vis[i])
		{
			dfs(i,0, true);
		}
	}
	if(bad)
		cout<<0<<endl;
	else
	{
		cout<<"1";
		for(int i=0; i<ans; i++)
			cout<<'0';
			
		cout<<endl;
	}
}

