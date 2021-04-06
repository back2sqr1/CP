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

void solve()
{
	ll x, y; cin>>x>>y;
	string s; cin>>s;
	int a[4]={0,0,0,0};
	for(char c: s){
		if(c=='U')
		a[0]++;
		if(c=='D')
		a[1]++;
		if(c=='L')
		a[2]++;
		if(c=='R')
		a[3]++;
	}
	if(x>0)
	{
		if(y>0)
		{
			cout<<(a[0]>=y && a[3]>=x? "YES": "NO")<<endl;
		}
		else
		{
			cout<<(a[1]>=abs(y) && a[3]>=x? "YES": "NO")<<endl;
		}
	}
	else
	{
		if(y>0)
		{
			cout<<(a[0]>=y && a[2]>=abs(x)? "YES": "NO")<<endl;
		}
		else
		{
			cout<<(a[1]>=abs(y) && a[2]>=abs(x)? "YES": "NO")<<endl;
		}
	}
}
int main() {
   FIO;
   int t; cin>>t;
   while(t--)
   {
   		solve();
   }
}


