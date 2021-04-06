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
const int SZ=2e5+1;
ll n;
vector<int> tree[SZ];
ll sizes[SZ];
ll dfsSize(int node)
{
	ll size=tree[node].size();
	for(auto x: tree[node])
	{
		size+=dfsSize(x);
	}
	sizes[node]=size;
	return size;
}
int main() {
	cin>>n;
	for(int i=2; i<=n; i++)
	{
		ll a;
		cin>>a;
		tree[a].pb(i);
	}
	dfsSize(1);
	for(int i=1; i<=n; i++)
	{
		cout<<sizes[i]<<' ';
	}
	cout<<endl;
}

