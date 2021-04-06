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
ll X,Y,K,M, ans=1e9;
bool g[101][101][101];
void ff(int x, int y, int k) { // flood fill!
    if(x<0||x>=101||y<0|| y>=101|| k<0||k>K || g[x][y][k]) return;
    ans=fmin(ans, abs(x+y-M));
    g[x][y][k]=1;
    //cout<<x<<' '<<y<<' '<<k<<endl;
    if(x!=X)
	ff(X, y, k+1);
	if(y!=Y)
	ff(x, Y, k+1);
	if(x!=0)
	ff(0, y, k+1);
	if(y!=0)
	ff(x,0, k+1);
	if(x!=0)
	{
		if(x+y>Y)
		ff(x+y-Y, Y, k+1);
		else
		ff(0,y+x,k+1);
	}
	if(y!=0)
	{
		if(x+y>X)
		ff(X, x+y-X, k+1);
		else
		ff(x+y,0,k+1);
	}
}

int main() {
	setIO("pails");
	cin>>X>>Y>>K>>M;
	for(int i=0; i<=X; i++)
	{
		for(int j=0; j<=Y; j++)
		{
			for(int k=0; k<=K; k++)
			{
				g[i][j][k]=0;
				//cout<<i<<' '<<j<<' '<<k<<endl;
			}		
		}
	}
	ff(0,0,0);
	cout<<ans<<endl;
}
