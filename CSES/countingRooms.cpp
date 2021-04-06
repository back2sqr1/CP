/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

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
const int xd[4] = {0,1,0,-1}, yd[4] = {1,0,-1,0};
ll n, m;
bool vis[1001][1001];
string rooms[1001];
void ff(int x, int y)
{
	if (x < 0 || x >= n || y < 0 || y >= m || rooms[x][y]=='#' || vis[x][y]) return;
	
//	cout<<x<<' '<<y<<endl;
	
	vis[x][y] = 1;
	for(int i=0;i<4; i++)
	{
		ff(x+xd[i],y+yd[i]);
	}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		cin>>rooms[i];
	}
	ll ans=0;
	for(int i=0; i<n; i++)
	for(int j=0; j<m; j++)
	{
		if(!vis[i][j] && rooms[i][j]=='.')
		{
			ff(i, j);
			ans++;
		}
	}
	cout<<ans<<endl;
}

