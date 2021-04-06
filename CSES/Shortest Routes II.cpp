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
ll ans[501][501];
int n, m;
void solve()
{
	
}
int main() {
   FIO;
   cin>>n>>m;
   int q; cin>>q;
   for(int i=0; i<=500; i++)
   for(int j=0; j<=500; j++)
   {
   		ans[i][j]=(i==j? 0: LLONG_MAX);
   }
   for(int i=0; i<m; i++)
   {
   		ll a, b, c; cin>>a>>b>>c;
   		ans[a][b]=min(c, ans[a][b]);
   		ans[b][a]=min(c, ans[a][b]);
   }
   for(int k=1; k<=n; ++k)
   for(int i=1; i<=n; ++i)
   for(int j=1; j<=n; ++j)
   {
   		if (ans[i][k] < LLONG_MAX&& ans[k][j] <LLONG_MAX)
   		ans[i][j]=min(ans[i][j], ans[i][k]+ans[k][j]);
   }
   while(q--)
   {
   		int x, y; cin>>x>>y;
   		cout<<(ans[x][y]==LLONG_MAX? -1: ans[x][y])<<endl;
   }
}


