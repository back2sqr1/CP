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
ll n;
string g[1000];
bool vis[2500][2500];
ll area=0, per=0;
void ff(int x, int y)
{
	if (x < 0 || x >= n || y < 0 || y >= n || g[x][y] == '.' || vis[x][y]) return;
	vis[x][y] = 1;
	area++;
	per+=4;
	for(int i=0;i<4; i++)
	{
		if(x+xd[i]>=0 && x+xd[i]<n && y+yd[i]>=0 && y+yd[i]<n)
		if(g[x+xd[i]][y+yd[i]]=='#')
		per--;
		ff(x+xd[i],y+yd[i]);
	}
}
int main() {
	setIO("perimeter");
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>g[i];
	}
	ll ans1=0, ans2=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(!vis[i][j] && g[i][j]=='#')
			{
				ff(i,j);
				if(ans1<area)
				{
					ans1=area;
					ans2=per;
				}
				else if(ans1==area)
				{
					ans2=fmin(ans2, per);
				}
				area=per=0;
			}
		}
	}
	cout<<ans1<<' '<<ans2<<endl;
}

