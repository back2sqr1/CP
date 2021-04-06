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
bool cmp(const pair<int,int>& x, const pair<int,int>& y) { if(x.f==y.f) return x.s<y.s;  return x.f<y.f;}
void solve()
{
	
}
int main() {
   FIO;
   int n, k; cin>>n>>k;
   ll ans=n*12;
	set<int> st;
	for(int i=0; i<n; i++)
	{
		int a; cin>>a;
		st.insert(a/12+1);
	}
	vi v; 
	ans=st.size()*12;
	int prev=0;
	trav(x, st)
	{
		if(prev!=0)
		v.pb(x-prev);
		
		prev=x;
	}
	sort(all(v));
	for(int i=0; i<st.size()-k; i++)
	{
		ans-=12;
		ans+=v[i]*12;
	}
	cout<<ans<<endl;
}


