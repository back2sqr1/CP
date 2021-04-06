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
const int MX=1e5+1;
vi c[MX];
bool v[MX];
int main() {
   setIO("swap");
	ll n, m, k; cin>>n>>m>>k;
	vpi s;
	vi change;
	for(int i=0; i<n; i++)
	{
		change.pb(i);
	}
//	for(int i=0; i<n; i++)
//		cout<<change[i]<<' ';
//		cout<<endl;
	memset(v, 0, MX);
	for(int i=0; i<m; i++)
	{
		ll a, b; cin>>a>>b;
		a--; b--;
		s.pb(mp(a,b));
		reverse(change.begin()+a, change.begin()+b+1);
//		for(int i=0; i<n; i++)
//		cout<<change[i]<<' ';
//		cout<<endl;
	}
	int ans[MX];
	for(int i=0; i<n; i++)
	{
		if(v[i])
		continue;
		v[i]=1;
		int a=change[i];
		c[i].pb(i);
		while(a!=i)
		{
			v[a]=1;
			c[i].pb(a);
			a=change[a];
		}
		int mod = k % c[i].size();
      	for (int j = 0; j < c[i].size(); j++) {
       	 	ans[c[i][j]] = c[i][(j+mod) % c[i].size()];
     	}
	}
	for(int i=0; i<n; i++)
	cout<<ans[i]+1<<endl;
}
