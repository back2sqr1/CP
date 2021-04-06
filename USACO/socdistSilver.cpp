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
vector<pair<int,int>> v;
ll n, m, in=0, MAX=0;
//bool arr[n];
bool check(ll d) {
    ll prev = INT_MIN;
    
    int cnt = 0;
    for (auto& i : v) {
        while (fmax(prev + d, i.f) <= i.s) {
            prev = fmax(prev + d, i.f);
            cnt++;
            if (cnt >= n) break;
        }
        if (cnt >= n) break;
    }
 
    return (cnt >= n);
}
 
int main() {
    setIO("socdist");
   // memset(arr, false, n );
   	cin>>n>>m;
   	for(int i=0; i<m; i++){
   	
   		ll n1, n2;
   		cin>>n1>>n2;
	   	v.pb(mp(n1, n2));
		MAX=fmax(MAX, n2);	
	}
   	sort(all(v));
    ll small=1, big=MAX, res=0;
    while(small<=big)
    {
    	ll mid=small+(big-small)/2;
    	if(!check(mid))
    	{
    		big=mid-1;
		}
		else
		{
			res=mid;
			small=mid+1;
		}
	}
	cout<<res<<endl;
}
