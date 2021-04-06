/*
	ID: theredh1
	LANG: C++
	PROG: socdist1
*/
#include <bits/stdc++.h> // see C++ Tips & Tricks
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
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
    setIO("socdist2");
	ll n;
	cin>>n;
	vector<pair<int,int>> c;
	for(int i=0; i<n; i++)
	{
		int a, b;
		cin>>a>>b;
		c.pb(mp(a, b));
	}
	sort(all(c));
	ll min=INT_MAX;
	for(int i=0; i<n-1; i++)
	{
		if(c[i].s!=c[i+1].s)
		{
			min=fmin(min, abs(c[i+1].f-c[i].f));
		}
	}

	//cout<<min<<endl;
	ll ans=0, prev=-1000;
	for(int i=0; i<n; i++)
	{
		if(!c[i].s)
		continue;
		if(c[i].f-prev>=min)
		ans++;
		
		prev=c[i].f;
	}
	cout<<ans<<endl;
}

