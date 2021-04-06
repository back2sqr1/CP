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


void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
bool cmpX(const int &a, const int &b)
{
	return x[a]<x[b];
}
bool cmpY(const int &a, const int &b)
{
	return y[a]<y[b];
}
const int MX=1e5+1, MOD=1e9+7;
int x[MX], y[MX];
struct mi {
  int v; explicit operator int() const { return v; }
  mi(ll _v) : v(_v%MOD) { v += (v<0)*MOD; }
  mi() : mi(0) {}
};
mi operator+(mi a, mi b) { return mi(a.v+b.v); }
mi operator-(mi a, mi b) { return mi(a.v-b.v); }
mi operator*(mi a, mi b) { return mi((ll)a.v*b.v); }
int main() {
   	//setIO("triangles");
	ll n;
	F0R(i, n)
	cin>>x[i]>>y[i];
	ll ans=0;
	
}
