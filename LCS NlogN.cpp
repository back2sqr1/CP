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
const int MOD= 1e9+7, SZ=1e5+1;
 
void solve(int n)
{
	vi lis;
	int a[n], b[n], c[n], pos[n];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		// pos is the inverse of a
		pos[a[i]] = i;
	}
	for (int i = 1; i <= n; ++i) {
		cin >> b[i];
	}
	for (int i = 1; i <= n; ++i) {
		c[i] = pos[b[i]];
	}

//	F1R(i, n+1) cout<<pos[i]<<' ';
//	cout<<endl;
//	
//	F1R(i, n+1) cout<<c[i]<<' ';
//	cout<<endl;
	
	for (int i = 1; i <= n; ++i) {
		int p = lower_bound(begin(lis), end(lis), c[i]) - begin(lis);
		if (p == lis.size())
			lis.push_back(c[i]);
		else
			lis[p] = c[i];
	}
//	for(int i=0; i<lis.size(); i++)
//		cout<<lis[i]<<' ';
		
//	cout<<endl;
	cout << lis.size() << '\n';
}
int main() {
    FIO;
    //testcases
    int n; cin>>n;
    solve(n);
}