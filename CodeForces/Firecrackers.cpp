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
vi v;
//bool check(int m){
//	
//}
void solve()
{
	int n, m, a, b; cin>>n>>m>>a>>b;
	a--; 
	b--;
	v.clear();
	for(int i=0; i<m; i++)
	{
		int a; cin>>a; v.pb(a);
	}
	sort(all(v));
	int t= 0, ans=0;
	int lo=0, hi=min(m, abs(a-b)-1);
	while(lo<=hi)
	{
		int mid=lo+(hi-lo)/2;
		t=(a<b? b: n-1-b);
		bool g=1;
		for(int i=mid-1; i>=0; i--)
		{
			if(--t < v[i])
			{
				g=0;
				//cout<<v[i]<<' ';
				break;
			}
		}
		//cout<<endl;
		if(!g)
		hi=mid-1;
		else
		{
			ans=mid;
			lo=mid+1;
		}
	}
//	cout<<endl;
	cout<<ans<<endl;
}
int main() {
    FIO;
	int t; cin>>t;
	while(t--)
	{
		solve();
	}
}


