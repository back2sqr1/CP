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
bool cmp(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
const int SZ=2e5+1;
//int ans[SZ];
int main() {
	ll n; cin>>n; 
   	//memset(ans, -1, n+1);
   	vi v; 
   	v.pb(0);
	FOR(i,1,n+1) {
   		int a; cin>>a;
   		v.pb(a);
	}
   	F1R(i, n+1)
   	{
   		if(i==v[i])
		   cout<<1<<endl;
		else
		{
			int a=v[i], b=v[v[i]];
			while(a!=b)
			{
				a=v[a]; b=v[v[b]];
			}
			a=i;
			while(a!=b)
			{
				a=v[a];
				b=v[b];
			}
			b=v[a];
			int len=1;
			while(a!=b)
			{
				cout<<b<<' ';
				b=v[b];
				len++;
			}
			cout<<b<<" length:";
			cout<<len<<endl;
		}	
	}
}


