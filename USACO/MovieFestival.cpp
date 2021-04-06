/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
int main() {
	//setIO("angry");
  	ll n;
	cin>>n;
	vector<pair<int,int>> v;
	
	for(int i=0; i<n; i++)
	{
		int N, N2;
		cin>>N>>N2;
		v.pb(mp(N, N2));	
	}
	sort(all(v));
	ll ans=1;
	pair<int,int> m=v[0];
	for(int i=1; i<n; i++)
	{
		if(v[i].f<m.s)
		{
			m.s=fmin(v[i].s,m.s);
		}
		else
		{
			m=v[i];
			ans++;
		}
	}	
	cout<<ans<<endl;
}

