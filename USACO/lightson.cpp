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
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
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
bool vis[101][101], lit[101][101];
vector<pair<int,int>> adj[101][101];
void zero()
{
	for(int i=0; i<=n; i++)
	for(int j=0; j<=n; j++)
	vis[i][j]=false;
}
int ff(int x, int y)
{
	if (x <= 0 || x > n || y <= 0 || y > n || !lit[x][y] || vis[x][y]) return 0;
	
	//cout<<x<<' '<<y<<endl;
	
	int ans=0;
	vis[x][y]=1;
	for(auto a: adj[x][y])
	{
	//	cout<<a.f<<' '<<a.s<<endl;
		if(!lit[a.f][a.s])
		ans++;
		//cout<<a.f<<' '<<a.s<<endl;
		lit[a.f][a.s]=1;
	}
	for(int i=0;i<4; i++)
	{
		//cout<<x+xd[i]<<' '<<y+yd[i]<<endl;
		ans+=ff(x+xd[i],y+yd[i]);
	}
	return ans;
}
int main() {
	setIO("lightson");
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		ll a, b, c, d;
		cin>>a>>b>>c>>d;
		adj[a][b].pb(mp(c, d));
	}
	for(int i=0; i<=n; i++)
	for(int j=0; j<=n; j++)
	lit[i][j]=false;
	
	
	lit[1][1]=1;
	int ans=ff(1, 1)+1;
	zero();
	//cout<<endl;
	int check=ff(1,1)+ans;
	//cout<<ans<<endl<<check<<endl;
	while(ans!=check)
	{
		zero();
		ans=check;
		//cout<<endl;
		check=ff(1,1)+ans;
	}
	cout<<ans<<endl;
}

