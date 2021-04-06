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
const ll MOD= 1e9+7;
const int SZ=1e5+1;
ll n;
int nty(int i, vector<int> v)
{
	map<int, int> map;
	while(map[i]!=1)
	{
		map[i]=1;
		i=v[i-1];
	}
	return i;
}
int main() {
	cin>>n;
	vector<int> v(n);
	for(auto&x: v) cin>>x;
	for(int i=1; i<=n; i++)
	{
		cout<<nty(i, v)<<' ';
	}
	cout<<endl;
}

