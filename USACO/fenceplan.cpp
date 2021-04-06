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
vector<int> adj[201];
vector<pair<int,int>> v;
bool visited[201];
ll n, m;
ll dfs(int node) {
	ll count=0;
	for(auto x: adj[node])
	{
		count+=v[x].f;
	}
}
int main() {
	//setIO("fenceplan");
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		ll n1, n2;
		cin>>n1>>n2;
		v.pb(mp(n1, n2));
	}
	for(int i=0; i<m; i++)
	{
		ll a, b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	ll max=0;
	for(int i=0; i<n; i++)
	{
		max=fmax(dfs(i+1), max);
	}
	cout<<max<<endl;
}

