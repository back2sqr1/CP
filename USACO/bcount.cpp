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
   	setIO("bcount");
    int n, q;
    cin>>n>>q;
    pair<int, pair<int, int>> pre[n+1];
    pre[0]=mp(0,mp(0,0));
    for(int i=1; i<=n; i++)
    {
    	ll c;
    	cin>>c;
    	pair<int, pair<int, int>> p=pre[i-1];
    	if(c==1)
    	{
    		p.f+=1;
    		pre[i]=p;
		}
		else if(c==2)
		{
			p.s.f+=1;
			pre[i]=p;
		}
		else
		{
			p.s.s+=1;
			pre[i]=p;
		}
	}
	for(int i=0; i<q; i++)
	{
		int l, r;
		cin>>l>>r;
		l--;
		cout<<pre[r].f-pre[l].f<<' '<<pre[r].s.f-pre[l].s.f<<' '<<pre[r].s.s-pre[l].s.s<<endl;
	}
}

