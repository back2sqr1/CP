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
	ll n, m, t;
	cin>>n>>m>>t;
	vector<int> v;
	int ans=t*-1+n;
	for(int i=0; i<m; i++)
	{
		ll a, b;
		cin>>a>>b;
		ans+=(b-a)*2;
	}
	cout<<(ans>0 ? "Yes":"No")<<endl;
	
}

