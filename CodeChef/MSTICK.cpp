#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using db = long double; // or double, if TL is tight
using str = string; // yay python!
 
using pi = pair<int,int>;
typedef pair<int, int> pii;
using pl = pair<ll,ll>;
using pd = pair<db,db>;
 
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<db>; 
using vs = vector<str>;
using vpi = vector<pi>;
using vpl = vector<pl>; 
using vpd = vector<pd>;
using vvi = vector<vi>;
#define tcT template<class T
#define tcTU tcT, class U
// ^ lol this makes everything look weird but I'll try it
tcT> using V = vector<T>; 
tcT, size_t SZ> using AR = array<T,SZ>; 
tcT> using PR = pair<T,T>;
 
// pairs
#define mp make_pair
#define f first
#define s second
 
// vectors
// oops size(x), rbegin(x), rend(x) need C++17
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 
#define rsz resize
#define ins insert 
#define ft front()
#define bk back()
#define pb push_back
#define ppb pop_back
#define eb emplace_back 
#define pf push_front
#define rtn return
#define cl clear;
 
#define lb lower_bound
#define ub upper_bound 
tcT> int lwb(V<T>& a, const T& b) { return int(lb(all(a),b)-bg(a)); }
#define tcTUU tcT, class ...U 
// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F1R(i, a) FOR(i, 1, a+1)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define iter(a) F0R(_,a)
#define each(a,x) for (auto& a: x)

#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#pragma once
const int MOD =  998244353;
const int MX = 1e5+5;
const ll INF = 1e18; // not too close to LLONG_MAX
const db PI = acos((db)-1);
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1}; // for every grid problem!!
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count()); 
template<class T> using pqg = priority_queue<T,vector<T>,greater<T>>;
 
// bitwise ops
// also see https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
constexpr int pct(int x) { return __builtin_popcount(x); } // # of bits set
constexpr int bits(int x) { // assert(x >= 0); // make C++11 compatible until USACO updates ...
	return x == 0 ? 0 : 31-__builtin_clz(x); } // floor(log2(x)) 
constexpr ll p2(ll x) { return 1LL<<x; }
constexpr int msk2(int x) { return p2(x)-1; }



template<class T>
struct RMQ {
	vector<vector<T>> jmp;
	RMQ(const vector<T>& V) : jmp(1, V) {
		for (int pw = 1, k = 1; pw * 2 <= sz(V); pw *= 2, ++k) {
			jmp.emplace_back(sz(V) - pw * 2 + 1);
			F0R(j,sz(jmp[k]))
				jmp[k][j] = min(jmp[k - 1][j], jmp[k - 1][j + pw]);
		}
	}
	T query(int a, int b) {
		assert(a < b); // or return inf if a == b
		int dep = 31 - __builtin_clz(b - a);
		return min(jmp[dep][a], jmp[dep][b - (1 << dep)]);
	}
};
template<class T>
struct RMQ2 {
	vector<vector<T>> jmp;
	RMQ2(const vector<T>& V) : jmp(1, V) {
		for (int pw = 1, k = 1; pw * 2 <= sz(V); pw *= 2, ++k) {
			jmp.emplace_back(sz(V) - pw * 2 + 1);
			F0R(j,sz(jmp[k]))
				jmp[k][j] = max(jmp[k - 1][j], jmp[k - 1][j + pw]);
		}
	}
	T query(int a, int b) {
		assert(a < b); // or return inf if a == b
		int dep = 31 - __builtin_clz(b - a);
		return max(jmp[dep][a], jmp[dep][b - (1 << dep)]);
	}
};
int N, M;
void solve() {

}
int main(){
	FIO;
//	cin.tie(0)->sync_with_stdio(0);
//	cin.exceptions(cin.failbit);
	
	cin>>N;
	vi v(N); 
	each(x, v) cin>>x;
	
	RMQ<int> mn(v);
	RMQ2<int> mx(v);
	cin>>M;
	double ans=0;
	while(M--)
	{
		ans=0;
		int L=0, R=0; cin>>L>>R;
		R++;
		double a=(double)mn.query(L, R);
		double l=(L>0 ? (double)mx.query(0,L):0);
		double r=(R<N? (double)mx.query(R, N): 0);
		double m=(double)mx.query(L, R);
		cout<<a<<' '<<l<<' '<<r<<' '<<m<<endl;
		cout<<max(l, max(r, (m-a)>0?(m-a)/2.0: 0))+a<<endl;
	}
}