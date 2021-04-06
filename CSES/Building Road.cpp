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
const ll MAX=1e5;
ll n, m;
vector<int> adj[MAX+1];
bool visited[MAX+1];
void dfs(int node)
{
	int count=1;
	visited[node]=true;
	for(auto N: adj[node])
	{
		if(!visited[N])
		{
			dfs(N);
		}
	}
}
int main() {
	cin>>n>>m;
	for(int i=0; i<m; i++){
		ll n1, n2;
		cin>>n1>>n2;
		adj[n1].pb(n2);
		adj[n2].pb(n1);
	}
	vector<pair<int,int>> v;
	for(int i=1; i<=n; i++)
	{
		if(!visited[i])
        {
        	v.pb(mp(i-1,i));
            dfs(i);
        }
	}
	cout<<v.size()-1<<endl;
	for(int i=1; i<v.size(); i++)
	{
		cout<<v[i].f<<' '<<v[i].s<<endl;
	}
}

