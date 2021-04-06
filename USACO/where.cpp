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
//#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define pb push_back
#pragma once
const int MOD=1e9+7;


void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if ((int)(name).size()) {
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
const int SZ=21;
char g[SZ][SZ];
ll N; 
string s;
int startX=0, startY=0,  ctr=0;
bool vis[SZ][SZ];
void ff(int x, int y, int n, int m, char a) { // flood fill!
    if (x < startX || x > startX+n || y < startY || y > startY+m || vis[x][y]|| g[x][y]!=a) return;
    vis[x][y]=1;
    //cout<<x<<' '<<y<<endl;
    F0R(i,4) ff(x+xd[i],y+yd[i], n, m, a);
}
int main() {
	FIO;
	//setIO("where");
	cin>>N;
	for(int i=0; i<N; i++)
	for(int j=0; j<N; j++)
	{
		cin>>g[i][j];
	}
	ll ans=0;
	
	cout<<ans<<endl;
}
