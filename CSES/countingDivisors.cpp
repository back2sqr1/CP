/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

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
map<int, int> factors(int n) {
	map<int, int> map;
	for (int x = 2; x*x <= n; x++) {
		while (n%x == 0) {
			if(map[x]==0)
			map[x]=1;
			else
			map[x]++;
			n /= x;		
		}
	}
	if (n > 1) map[n]=1;;
	return map;
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll n;
	cin>>n; 
	for(int i=0; i<n; i++)
	{
		ll ans=1, j=1, a;
		cin>>a;
		map<int, int> m=factors(a);
		for(auto x: m)
		{
			ans*=x.s+1;
		}
		cout<<ans<<endl;
	}
}

