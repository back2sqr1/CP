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
const int SZ=1001;
//bool box[SZ][SZ], vis[SZ][SZ];

void bfs()
{
	
}
void dfs(int node)
{
	
}
bool check(int b, int a, int m)
{
	return (b+m+a)%2==0;
}
void solve()
{
	string s; cin>>s;
	int a=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='?')
		a++;
	}
	//cout<<b<<m<<a<<endl;
	if(s.length()%2 || a%2 || s[0]==')' || s[s.length()-1]=='(')
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
}
int main() {
    FIO;
    int t; cin>>t;
    while(t--)
    {
    	solve();
	}
}


