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
const int SZ=1001;
//bool box[SZ][SZ], vis[SZ][SZ];

void bfs()
{
	
}
void dfs(int node)
{
	
}
void check()
{
	
}
void solve()
{
	int h, w; cin>>h>>w;
	bool check[h][w];
	F0R(i, h)
	{
		F0R(j, w)
		{
			char a; cin>>a;
			check[i][j]=(a=='*');
		}
	}
	int x=0, y=0;
	F1R(i, h-1)
	{
		bool good=0;
		F1R(j, w-1)
		{
			if(check[i-1][j] && check[i][j] && check[i+1][j] && check[i][j-1] && check[i][j+1])
			{
				good=1;
				x=i;
				y=j;
				break;
			}
		}
		if(good)
		break;
	}
	if(x==0 && y==0)
	{
		cout<<"NO"<<endl;
		return ;
	}
	int lX=1, lY=1, rX=1, rY=1;
	while(x-lX>=0 && check[x-lX][y])
		lX++;
	while(x+rX<h && check[x+rX][y])
		rX++;
	while(y-lY>=0 && check[x][y-lY])
		lY++;
	while(y+rY<w && check[x][y+rY])
		rY++;
	F0R(i, h)
	{
		F0R(j, w)
		{
			if(check[i][j])
			{
				if(i==x)
				{
					if(j<y-lY)
					{
						cout<<"NO"<<endl;
						return;
					}
					if(j>y+rY)
					{
						cout<<"NO"<<endl;
						return;
					}
				}
				else if(j==y)
				{
					if(i<x-lX)
					{
						cout<<"NO"<<endl;
						return;
					}
					if(i>x+rX)
					{
						cout<<"NO"<<endl;
						return;
					}
				}
				else
				{
					cout<<"NO"<<endl;
					return ;
				}
			}
			//cout<<i<<' '<<j<<endl;
		}
	}
	cout<<"YES"<<endl;
}
int main() {
    FIO;
    solve();
}


