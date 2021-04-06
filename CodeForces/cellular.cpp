/*
	ID: theredh1
	LANG: C++
	PROG: citystate
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
#define all(x) (x).begin(), (x).end()
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
int main() {
   	//setIO("pairup");
    int c, ct;
    cin>>c>>ct;
    vector<ll> cities;
	set<ll> towers;
    for(int i=0; i<c; i++)
    {
    	int n;
    	cin>>n;
    	cities.pb(n);
	}
	for(int i=0; i<ct; i++)
	{
		int n;
		cin>>n;
		towers.insert(n);
	}
	ll dist=0;
	for(auto x: cities)
	{
		auto b= towers.lower_bound(x);
		auto a=b;
		a--;
		if(b==towers.end())
		dist=fmax(abs(*a-x), dist);
		else
		dist=fmax(fmin(abs(*b-x), abs(*a-x)), dist);
	}
	cout<<dist<<endl;
}

