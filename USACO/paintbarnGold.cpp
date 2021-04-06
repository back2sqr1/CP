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
#define pb push_back
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
int paint[201];
int wall[201][201], actual[201][201];
ll n,k;
void printBarn()
{
	FOR(i, 0, 10)
	{
		FOR(j, 0, 10)
		{
			cout<<wall[i][j]<<' ';
		}
		cout<<endl;
	}
}
int main() {
    //setIO("paintbarn");
    cin>>n>>k;
    //memset(paint, 0, 201);
    memset(wall, 0, 201);
    F0R(i, n)
    {
    	// put all the xs in
    	ll x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
    	wall[x1][y1]++;
    	wall[x1][y2]--;
    	wall[x2][y1]--;
    	wall[x2][y2]++;
	}
	int ans=0;
	FOR(i, 1, 201)
	{
		FOR(j, 1, 201)
		{
			wall[i][j]+=wall[i-1][j]+wall[i][j-1];
			wall[i][j]-=wall[i-1][j-1];
			if(wall[i][j]==k-1) actual[i][j]=1;
			if(wall[i][j]==k)
			{
				ans++;
				actual[i][j]=-1;
			}
		}
	}
	FOR(i, 1, 201)
	{
		FOR(j, 1, 201)
		{
			actual[i][j]+=actual[i][j]+actual[i][j-1];
			actual[i][j]-=actual[i-1][j-1];
		}
	}
	FOR(i, 1, 201)
	{
		FOR(j, 1, 201)
		{
			
		}
	}
	printBarn();
	cout<<ans<<endl;
	
	
}


