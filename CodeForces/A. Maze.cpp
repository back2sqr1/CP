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
int n,m, k;
bool vis[2500][2500]={0};
char a[501][501];
const int xd[4] = {0,1,0,-1}, yd[4] = {1,0,-1,0};
void ff(int x, int y) { // flood fill!
    if (x < 0 || x >= n || y < 0 || y >= m || a[x][y] == '#' || vis[x][y] || !k) return;
    vis[x][y] = 1;
    F0R(i,4) ff(x+xd[i],y+yd[i]);
    if(!k)
    return ;
	k--;
    a[x][y]='X';
}

const int SZ=1001;
//bool box[SZ][SZ], vis[SZ][SZ];
int main() {
    FIO;
    cin>>n>>m>>k;
    for(int i=0;i<n; i++)
    for(int j=0; j<m;j++)
    {
    	cin>>a[i][j];
	}
	for(int i=0;i<n; i++)
	{
		bool g=0;
	    for(int j=0; j<m;j++)
	    {
	    	if(a[i][j]=='.')
	    	{
	    		ff(i, j);
	    		g=1;
	    		break;
			}
		}
		if(g)
		break;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;	
	}
}


