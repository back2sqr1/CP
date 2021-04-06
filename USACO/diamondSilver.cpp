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
   	setIO("diamond");
    ll n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto&x: v) cin>>x;
	sort(all(v));

//	for(int i=0; i<n; i++)
//	cout<<v[i]<<' ';
//	cout<<endl;
	
	
	int dist[n+1];
	int r=0;
	for(int i=0; i<n; i++)
	{
		while(r<n && v[r]-v[i]<=k) r++;
		dist[i]=r-i;
		
	//	cout<<dist[i]<<' ';
	}
//	cout<<endl;
	int max[n+1];
	max[n]=0;
	for(int i=n-1; i>=0; i--)
	{
		max[i]=fmax(max[i+1], dist[i]);
	}
//	for(int i=0; i<=n; i++)
//	{
//		cout<<max[i]<<' ';
//	}
//	cout<<endl;
	int ans=0;
	for(int i=0; i<n; i++)
	{
		ans=fmax(ans, dist[i]+max[i+dist[i]]);
	//	cout<<dist[i]+max[i+dist[i]]<<' ';
	}
//	cout<<endl;
	cout<<ans<<endl;
}

