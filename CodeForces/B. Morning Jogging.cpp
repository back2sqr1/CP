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
	int n, m; cin>>n>>m;
	ll v[101][101];
	vll s;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>v[i][j];
			s.pb(v[i][j]);
		}
		sort(v[i], v[i]+m);
	}
	sort(all(s));
	vll sm;
	for(int i=0; i<m; i++)
	sm.pb(s[i]);
	
//	cout<<endl;
//	for(int i=0; i<m; i++)
//	cout<<sm[i]<<' ';
//	cout<<endl<<endl;;
	int a=0;
	for(int i=0; i<n; i++)
	{	
		deque<int> ans;
		int j=0, te=0;
		while(j<m && sm.size()>0 && binary_search(all(sm), v[i][j]))
		{
			ans.pb(v[i][j]);
			sm.erase(find(all(sm),v[i][j]));
			j++;
			te++;
		}
		int t=j;
		for(; j<m && j<t+a; j++)
			ans.push_front(v[i][j]);
		for(; j<m; j++)
			ans.pb(v[i][j]);
		for(int x: ans)
			cout<<x<<' ';
		a+=te;
		cout<<endl;
	}	
	
}

int main() {
    FIO;
	int t; cin>>t;
	while(t--) {
		solve();
	}
}


