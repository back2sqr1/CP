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
    //setIO("gymnastics");
	vector<int> v;
	for(int i=0; i<7; i++)
	{
		ll a;
		cin>>a;
		v.pb(a);
	}
	sort(all(v));
	cout<<v[0]<<' '<<v[1]<<' '<<v[6]-v[1]-v[0]<<endl;
}

