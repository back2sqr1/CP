#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
typedef long long ll; 
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
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
        freopen((name+".txt").c_str(), "r", stdin); 
        freopen((name+"-23.txt").c_str(), "w", stdout);
    }
}
bool cmp(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}

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
	int n, k; cin>>n>>k;
	vi v(n);
	trav(x, v) cin>>x;
	int i=0;
	while(k>0 && i<n-1)
	{
		if(v[i]<=k)
		{
			k-=v[i];
			v[n-1]+=v[i];
			v[i]=0;
		}
		else
		{
			v[i]-=k;
			v[n-1]+=k;
			k=0;
		}
		i++;
	}
	for(int x: v)
	{
		cout<<x<<' ';
	}
	cout<<endl;
}

int main() {
    FIO;
    int t; cin>>t;
    while(t--)
	solve();
}


