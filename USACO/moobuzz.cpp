/*
	ID: theredh1
	LANG: C++
	PROG: moobuzz
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
int arr[8]={1, 2, 4, 7, 8, 11, 13, 14};
int main() {
    setIO("moobuzz");
    ll n;
	cin>>n;
	n--;
	ll m=n%8, ans=n/8;
	ans*=15;
	ans+=arr[m];
	cout<<ans<<endl;
}


