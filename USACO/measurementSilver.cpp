/*
	ID: theredh1
	LANG: C++
	PROG: blocks
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
bool cmp(const pair<ll,ll>& x, const pair<ll,ll>& y)
 { if(x.s==y.s)	return x.f<y.s;
 	return x.s > y.s; }
bool rcmp(const pair<ll,ll>& x, const pair<ll,ll>& y)
 { return x.f < y.f; }
int main(void)
{
	//setIO("measurement");
	vector<pair<ll, ll>> map;
	ll n, g;
	cin>>n>>g;
	vector<tuple<ll,ll,ll>> v;
	for(int i=0; i<n; i++)
	{
		ll a, b, c;
		cin>>a>>b;
		char neg;
		cin>>neg>>c;
		if(neg=='-')
		c*=-1;
		v.pb(make_tuple(a,b,c));
		if(find(all(map),mp(b,g))==map.end())	
		map.pb(mp(b,g));
	}
	sort(all(v));
	sort(all(map));
	pair<ll,ll> prev=mp(0,0);
	ll ans=0;
	for(int i=0; i<n; i++)
	{
		
	}
	cout<<ans<<endl;
}

