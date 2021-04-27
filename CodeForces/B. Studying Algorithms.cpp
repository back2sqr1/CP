#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
typedef long long ll; 
typedef vector<ll> vll;
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
const int MOD= 1e9+7, SZ=1e7+100;

void solve()
{
	int x, n; cin>>n>>x;
	vi v(n);
	trav(a, v)
		cin>>a; 
	sort(all(v));
	int ans=0;
	for(int i=0; i<n && x>0; i++)
	{
		if(x>=v[i])
		ans++;
		
		x-=v[i];
	}
	cout<<ans<<endl;
}
int main() {
    FIO;
    //testcases
    solve();
}


