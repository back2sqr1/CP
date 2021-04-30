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
	int n, ans = 0; cin >> n;
    int xr = 0;
    vi a(n);
    F(i, n) {
    	cin >> a[i];
    	xr ^= a[i];
    }
    if(xr == 0){
    	cout << "YES" << '\n';
    }
    else{
    	int t = 0, c = 0;
    	for(int i=0;i<n;i++) {
    		t^=a[i];
    		if(t==xr){
    			c++;
    			t = 0;
    		}
    	}
    	if(c >= 3 ){
    		cout << "YES" << '\n';
    	}
    	else{
	    	cout << "NO" << '\n';
    	}
    }
}

int main() {
    FIO;
    int t; cin>>t;
    while(t--)
	solve();
}


