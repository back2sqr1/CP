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
bool cmp (const pair<int,int>& a, const pair<int,int>& b) {
    return a.s < b.s;
}
ll MOD=1e9+7;
int main() {
   	setIO("lostcow");
   	int x, y;
   	cin>>x>>y;
   	int dist=1, temp=x, dir=1, ans=0;
	if(y<x)
	{
		while(temp>y)
		{
			ans+=abs(temp-(x+dist*dir));
			temp=(x+dist*dir);
			dir*=-1;
			dist*=2;
		}
		ans-=abs(temp-y);
	}
	else
	{
		while(temp<y)
		{
			ans+=abs(temp-(x+dist*dir));
			temp=(x+dist*dir);
			dir*=-1;	
			dist*=2;
			//cout<<ans<<endl;
		}
		ans-=abs(temp-y);
	}
	cout<<ans<<endl;
}

