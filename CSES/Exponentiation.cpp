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
const int MOD=1e9+7;

template<int MOD, int RT> struct mint {
	static const int mod = MOD;
	int v; explicit operator int() const { return v; } // explicit -> don't silently convert to int
	mint() { v = 0; }
	mint(long long _v) { v = int((-MOD < _v && _v < MOD) ? _v : _v % MOD);
		if (v < 0) v += MOD; }
	friend bool operator==(const mint& a, const mint& b) {
		return a.v == b.v; }
	friend bool operator!=(const mint& a, const mint& b) {
		return !(a == b); }
	friend bool operator<(const mint& a, const mint& b) {
		return a.v < b.v; }
	friend string to_string(mint a) { return to_string(a.v); }

	mint& operator+=(const mint& m) {
		if ((v += m.v) >= MOD) v -= MOD;
		return *this; }
	mint& operator-=(const mint& m) {
		if ((v -= m.v) < 0) v += MOD;
		return *this; }
	mint& operator*=(const mint& m) {
		v = int((long long)v*m.v%MOD); return *this; }
	mint& operator/=(const mint& m) { return (*this) *= inv(m); }
	friend mint pow(mint a, long long p) {
		mint ans = 1; assert(p >= 0);
		for (; p; p /= 2, a *= a) if (p&1) ans *= a;
		return ans; }
	friend mint inv(const mint& a) { assert(a.v != 0);
		return pow(a,MOD-2); }

	mint operator-() const { return mint(-v); }
	mint& operator++() { return *this += 1; }
	mint& operator--() { return *this -= 1; }
	friend mint operator+(mint a, const mint& b) { return a += b; }
	friend mint operator-(mint a, const mint& b) { return a -= b; }
	friend mint operator*(mint a, const mint& b) { return a *= b; }
	friend mint operator/(mint a, const mint& b) { return a /= b; }
};

vector<vector<mint<MOD,5> > > scmb; // small combinations, 5 is primitive root for both common mods
void genComb(int SZ) {
	scmb.assign(SZ,vector<mint<MOD,5> > (SZ)); scmb[0][0] = 1;
	for(int i=1; i<SZ; ++i) for(int j = 0; j<i+1; ++j)
		scmb[i][j] = scmb[i-1][j]+(j?scmb[i-1][j-1]:0);
}

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
const int SZ=1001;
//bool box[SZ][SZ], vis[SZ][SZ];

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main() {
    FIO;
    ll t; cin>>t;
    while(t--)
    {
    	ll a, b; cin>>a>>b;
    	cout<<binpow(a, b, 1e9+7)<<endl;
	}
}
