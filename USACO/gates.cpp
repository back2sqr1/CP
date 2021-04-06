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
const int xd[4] = {0,1,0,-1}, yd[4] = {1,0,-1,0};
const int SZ=2005;
bool g[SZ][SZ];
ll n; 
string s;
void ff(int x, int y) { // flood fill!
    if (x < 0 || x >= SZ || y < 0 || y >= SZ || g[x][y]) return;
    g[x][y] = 1;
    //cout<<x<<' '<<y<<endl;
    F0R(i,4) ff(x+xd[i],y+yd[i]);
}
int main() {
	setIO("gates");
	cin>>n>>s;
	for(int i=0; i<SZ; i++)
	for(int j=0; j<SZ; j++)
	g[i][j]=0;
	
	int x=SZ/2, y=SZ/2;
	for(int i=0; i<s.length(); i++)
	{
		g[x][y]=1;
		if(s[i]=='N')
		{
			y+=2;
			g[x][y-1]=1;
		}
		if(s[i]=='E')
		{
			x+=2;
			g[x-1][y]=1;
		}
		if(s[i]=='S')
		{
			y-=2;
			g[x][y+1]=1;
		}
		if(s[i]=='W')
		{
			x-=2;
			g[x+1][y]=1;
		}
		g[x][y]=1;
	}
	
	int ans=0;
	for(int i=0; i<SZ; i++)
	for(int j=0; j<SZ; j++)
	{
		if(!g[i][j])
		{
			ff(i, j);
			ans++;
			//cout<<ans<<endl;
		}
		
	}
	cout<<ans-1<<endl;
}
