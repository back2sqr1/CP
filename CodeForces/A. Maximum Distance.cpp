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
	int n; cin>>n;
	vll x(n), y(n); 
	trav(a, x)
		cin>>a;
	trav(b, y)
		cin>>b;
	ll ans=0;
	for(int i=0; i<n; i++)
	for(int j=i+1; j<n; j++)
	{
		ll x1=x[i], x2=x[j], y1=y[i], y2=y[j];
		ll a=abs(x1-x2), b=abs(y1-y2);
		ans=max(ans, a*a+b*b);
	}
	cout<<ans<<endl;
}
int main() {
    FIO;
    //testcases
    solve();
}


