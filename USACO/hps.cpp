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
   	setIO("hps");
    int N;
    cin>>N;
    pair<int, pair<int,int>> pre[N+1];
    pre[0]=mp(0, mp(0,0));
    for(int i=1; i<=N; i++)
    {
    	char a;
    	cin>>a;
    	pair<int,pair<int,int>> p=pre[i-1];
    	if(a=='P')
    	{
    		p.s.f++;
    		pre[i]=p;
		}
		else if(a=='H')
		{
			p.first++;
			pre[i]=p;
		}
		else
		{
			p.second.s++;
			pre[i]=p;
		}
	}
	ll ans=0;
    for(int i=2; i<N; i++)
    {
    	auto left=pre[i];
		left.f-=pre[0].f;
		left.s.f-=pre[0].s.f;
		left.s.s-=pre[0].second.s;
    	auto right=pre[N];
    	right.f-=pre[i].f;
    	right.s.f-=pre[i].s.f;
    	right.s.s-=pre[i].s.s;
    	ll l=fmax(left.f,fmax(left.s.f,left.s.s)), r=fmax(right.f,fmax(right.s.f,right.s.s));
    	ans=fmax(ans, l+r);
	}
	cout<<ans<<endl;
}
