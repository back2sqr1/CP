#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
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
void solve()
{
	int n, q; cin>>n>>q;
	string S,F; cin>>S>>F;
	set<int> seg;
	bool laz[n]={0};
	vpi v; 
	for(int i=0; i<q; i++)
	{
		pi x;
		cin>>x.f>>x.s;
		x.first--;
		x.second--;
		v.pb(mp(x.f, x.s));
	}
	reverse(all(v));
	for(int i=0; i<q; i++)
	{
		
	}
	
	cout<<(F==S?"YES":"NO")<<endl;
	
}

int main() {
    FIO;
    //testcases
    int t; cin>>t;
    while(t--){
    	solve();
	}
}


