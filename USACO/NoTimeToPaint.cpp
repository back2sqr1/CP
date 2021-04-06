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
#define mp make_pair
#define pb push_back
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
const int SZ=1e5+1;
int n, q;
int p[SZ], s[SZ];
void solve(int a, int b)
{
	//cout<<p[a]<<' '<<s[b+1]<<endl;
	cout<< p[a]+s[b+1]<<endl;	
}
int main() {
    FIO;
    cin>>n>>q;
    string ss;
    cin>>ss;
    set<char> Set;
    for(int i=0; i<n; i++)
    {
    	Set.insert(ss[i]);
    	p[i]=Set.size();	
    //cout<<p[i]<<' ';
	}
	//cout<<endl;
	Set.clear();
	
	for(int i=n-1; i>=0; i--)
	{
		Set.insert(ss[i]);
    	s[i]=Set.size();
	}
	//reverse(s, s+n+1);
//	for(int i=0; i<=n; i++)
//	{
//		cout<<s[i]<<' ';
//	}
	//cout<<endl;
    for(int i=0; i<q; i++)
    {
    	int a, b; cin>>a>>b;
    	a--;b--;
    	solve(a, b);
	}
	
}
