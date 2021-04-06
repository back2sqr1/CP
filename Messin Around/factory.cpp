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
int ct;
void dfs(vector<int> v, vector<int> adj[])
{
	if(v.size()==0)
	{
		//cout<<ctr<<endl;
		return;
	}
	for(int j=0; j<v.size(); j++)
	{
		//cout<<v[j]<<' '<<ctr<<endl;
		ct++;
		dfs(adj[v[j]], adj);
	//	cout<<v[j]<<' '<<ctr<<endl;
	}
}
int main()
{
	setIO("factory");
	int n;
	cin>>n;
	vector<int> adj[n+1];
	for(int i=0; i<n-1; i++)
	{
		int num1, num2;
		cin>>num1>>num2;
		adj[num2].pb(num1);
	}
	for(int i=1; i<=n; i++)
	{
		ct=1;
		dfs(adj[i], adj);
		
		if(ct>=n)
		{
			cout<<i<<endl;
			//cout<<ct<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
}
