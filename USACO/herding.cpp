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
ll n;
vector<int> v;
int solve()
{
	if (v[n-2]-v[0] == n-2 && v[n-1]-v[n-2]>2) return 2;
	if (v[n-1]-v[1] == n-2 && v[1]-v[0]>2) return 2;
	int i, j=0, best=0;
	for (i=0; i<n; i++) {
		while (j<n-1 && v[j+1]-v[i]<=n-1) j++;
	    best = max(best, j-i+1);
	}
	return n-best;
}
int main() {
	setIO("herding");
	cin>>n;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		v.pb(a);
	}
	sort(all(v));
	//max=n-1
	
	cout<<solve()<<endl;
	cout<<max(v[n-2]-v[0], v[n-1]-v[1])-(n-2)<<endl;
}

