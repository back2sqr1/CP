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
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
const int SZ=14;
vpi v;
ll n; 
bool cmp(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
bool cmp2(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.s==b.s)
	return a.f<b.f;
	
	return a.s<b.s;
}
int checkLine(int x, int y)
{

	auto a=lower_bound(all(v), mp(x, y));
	int l=a-v.begin();
	int ans=0, ctr=0;
	int i=0;
	cout<<l<<' '; 
	while(i<l && v[i].s<y)
	{
		ctr++;
		i++;
	}
	ans=fmax(ctr, ans);
	cout<<ctr<<' ';
	ctr=0;	
	while(i<l && v[i].s>y)
	{
		ctr++;
		i++;
	}
	ans=fmax(ctr, ans);
	cout<<ctr<<' ';
	ctr=0;	
	while(i<n && v[i].s<y)
	{
		ctr++;
		i++;
	}
	ans=fmax(ctr, ans);
	cout<<ctr<<' ';
	ctr=0;	
	while(i<n && v[i].s>y)
	{
		ctr++;
		i++;
	}
	ans=fmax(ctr, ans);
	cout<<ctr<<' ';
	cout<<x<<' '<<y<<" ANS: "<<ans<<endl;
	return ans;	
}
bool check(ll m)
{
	for(int i=0; i<SZ; i+=2)
	for(int j=0; j<SZ; j+=2)
	{
		int a=checkLine(i, j);
		if(a<=m)
		{
			return 1;
		}
		//cout<<i<<' '<<j<<endl;
	}
	return 0;
}
int main() {
    FIO;
    cin>>n;
    F0R(i, n) 
	{	
		ll a, b; cin>>a>>b;
		v.pb(mp(a,b));
	}
	sort(all(v), cmp);
    ll lo=0, hi=n, res=0;
    while (lo <= hi) {
        ll m = lo+(hi-lo)/2; 
        if (check(m)) {
            res = m;
            hi = m-1; 
        } else {
            lo = m+1; 
        }
    }
    cout<<res<<endl;
}


