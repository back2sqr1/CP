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
#pragma once
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
vi a, b, pos, A, B;
bool cmp(const int& i, const int& j)
{
	return b[i]>b[j];
}

const int MOD=1e9+7;
const int SZ=2e5+1;
const int S=2e5+1;
int n, m; 
//bool check(ll mid)
//{
//	int ans=INT_MAX;
//	for(int i=n; i>=0; i--)
//	{
//		for(int j=0; j<i; j++)
//		{
//			if(A[i]-A[j]>=m)
//			ans=min(ans, B[i]-B[j]);
//			else
//			break;
//		}
//		if(A[i]<m)
//		break;
//	}
//	return ans<=m;
//}
void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> a, b;
	vector<int> v(n);
	for (int &e : v) {
		cin >> e;
	}
	for (int &e : v) {
		int x;
	    cin >> x;
	    if (x == 1) {
	      a.push_back(e);
	    } else {
	      b.push_back(e);
	    }
	  }
	  sort(a.rbegin(), a.rend());
	  sort(b.rbegin(), b.rend());
	  ll curSumA = 0;
	  int r = (int)b.size();
	  ll curSumB = accumulate(b.begin(), b.end(), 0ll);
	  int ans = INT_MAX;
	  for (int l = 0; l <= a.size(); l++) {
	    while (r > 0 && curSumA + curSumB - b[r - 1] >= m) {
	      r--;
	      curSumB -= b[r];
	    }
	    if (curSumB + curSumA >= m) {
	      ans = min(ans, 2 * r + l);
	    }
	    if (l != a.size()) {
	      curSumA += a[l];
	    }
	  }
	  cout << (ans == INT_MAX ? -1 : ans) << "\n";
}
int main() {
   //setIO("wormsort");
   int t; cin>>t;
   while(t--)
   {
   		solve();
   }
}
