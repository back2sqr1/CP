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
ll p(int n)
{
	ll ans=1;
	for(int i=0; i<n; i++)
	{
		//cout<<ans<<endl;
		ans*=2;
	}
	return ans;
}
const int SZ=2501;
vector<pair<pair<int,int>,int>> X, Y;
void solve()
{
	ll n, k; cin>>n>>k;
	cout<<(k*k>n || n%2!=k%2? "NO":"YES")<<endl;
}
template<typename T>
vector<T> s(vector<T> const &v, int m, int n) {
   auto first = v.begin() + m;
   auto last = v.begin() + n + 1;
   vector<T> vector(first, last);
   return vector;
}
int main() {
    FIO;
    ll n; cin>>n;
    int pre[SZ];
    pre[0]=0;
    for(int i=1; i<SZ; i++)
    pre[i]=pre[i-1]+i;
    for(int i=0; i<n; i++)
    {
    	int a, b; cin>>a>>b;
    	X.pb(mp(mp(a, b), i));
    	Y.pb(mp(mp(b, a),i));
	}
	sort(all(X));
	sort(all(Y)); //y, x
    for(int i=0; i<n; i++)
    {
    	cout<<X[i].s<<' ';
	}
    cout<<endl;
    for(int i=0; i<n; i++)
    {
    	cout<<Y[i].s<<' ';
	}
	cout<<endl;
	set<vpi> ans;
	for(int l=1; l<n; l++)
	{
		for(int i=0; i<n-l; i++)
		{
			ans.insert(s(X, i, i+l));
			ans.insert(s(Y, i, i+l));
		}
	}
	
    cout<<ans.size()+1 <<endl;
}


