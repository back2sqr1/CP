/*
	ID: theredh1
	LANG: C++
	PROG: ariprog
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
void show(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}
void showrev(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[v.size()-i-1]<<" ";
    cout<<"\n";
}
void showarr(ll arr[],ll n)
{
    for(ll i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
struct Rect{
	int x1,y1,x2,y2;
	int area()
	{
		return (x2-x1)*(y2-y1);
	}
};
int pre[1000][1001];
int main() {
    setIO("paintbarn");
    ll n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
    	ll x1, x2, y1, y2;
    	cin>>y1>>x1>>y2>>x2;
    	pre[y1][x1]++;
    	pre[y1][x2]--;
    	pre[y2][x1]--;
    	pre[y2][x2]++;
	}
	int ans=0;
	for(int i=0; i<1000; i++)
	for(int j=0; j<1000; j++)
	{
		if(i)
		pre[i][j]+=pre[i-1][j];
		if(j)
		pre[i][j]+=pre[i][j-1];
		if(i&&j)
		pre[i][j]-=pre[i-1][j-1];
		if(pre[i][j]==k)
		ans++;
	}
	cout<<ans<<endl;
}
