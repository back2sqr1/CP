/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
const ll MOD= 1e9+7;
const int SZ=1e5+1;
bool cmp(const pair<pair<ll,ll>,ll>& a, const pair<pair<ll,ll>,ll>& b)
{
	if(a.f.f==b.f.f)
	return a.f.s<b.f.s;
	
	return a.f.f<b.f.f;
}
bool ansSort(const pair<ll,ll> &a, const pair<ll,ll> & b)
{
	return a.s<b.s;
}
int main() {
	
}

