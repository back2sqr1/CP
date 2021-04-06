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
int main() {
    setIO("circlecross");
    unordered_map<char,pair<int,int>> map;
    for(int i=1; i<=52; i++)
    {
    	char a;
    	cin>>a;
    	if(map[a].f==0 && map[a].s==0)
    	{
    		map[a].f=i;
		}
		else if(map[a].s==0)
		{
			map[a].s=i;
		}
	}
	int ans=0;
	for(auto x: map)
	for(auto y: map)
	{
	//	cout<<x.f<<' '<<x.s.f<<' '<<x.s.s<<endl;
		if(y.f!=x.f && y.s.f>x.s.f && y.s.s>x.s.s && x.s.s>y.s.f)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
}

