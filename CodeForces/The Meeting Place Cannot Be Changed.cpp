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
bool cmp(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
ll n; 
vi v, v2;
bool check(double mid)
{
	double max=0, min=1e9;
	for(int i=0; i<n; i++)
	{
		max=fmax(max, v[i]-v2[i]*mid);
		min=fmin(min, v[i]+v2[i]*mid);
	}
	return max<=min;
}
int main() {
   //setIO("wormsort");
   cin>>n;
	F0R(i, n)
	{
		ll a; cin>>a; v.pb(a);
	}
	F0R(i, n)
	{
		ll a; cin>>a; v2.pb(a);
	}
//	sort(all(v));
	double lo=0, hi=1e9+1, res=1e9;
	while(hi-lo>1e-6)
	{
		double m=lo+(hi-lo)/2;
		if(check(m))
		{
			hi=m;	
		}
		else
		{
			lo=m;
		}
		//cout<<m<<endl;
	}
	cout<<printf("%.8lf", hi)<<endl;
}
