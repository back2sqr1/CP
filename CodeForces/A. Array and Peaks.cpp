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
	int n, k; cin>>n>>k;

	if(k>=ceil(n/2.0))
	{
		cout<<-1<<endl;
		return;
	}
	vi v; 
	for(int i=1; i<=n; i++)
		v.pb(i);
	int a=0;
	for(int i=1; i<n-1; i+=2)
	{
		if(a==k)
		break;
		a++;
		swap(v[i], v[i+1]);
	}
	for(int i=0; i<n; i++)
	{
		cout<<v[i]<<' ';
	}
	cout<<endl;
}
int main() {
    FIO;
    //testcases
    int t; cin>>t;
    while(t--){
    	solve();
	}
}


