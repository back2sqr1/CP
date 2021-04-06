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
	int n, k; cin>>n>>k;
	vi v(n);
	int mx=0;
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
		mx=max(mx, v[i]);
	}
	if(n*mx<k)
	{
		cout<<-1<<endl;
		return;
	}
	else
	{
		int ans=n+1;
		for(int i=0; i<k; i++)
		{
			bool g=0;
			for(int j=0; j<n-1; j++)
			{
				if(v[j]<v[j+1])
				{
					v[j]++;
					ans=j;
					g=1;
					break;	
				}
			}
			if(!g)
			{
				cout<<-1<<endl;
				return;
			}
		}
		cout<<ans+1<<endl;
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


