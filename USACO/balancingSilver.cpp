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
   	setIO("balancing");
    int n, temp;
    cin>>n;    
    vector<pair<int,int>> fn;
    for(int i=0; i<n; i++)
    {
    	int num1, num2;
    	cin>>num1>>num2;
    	
    	fn.pb(mp(num1,num2));
	}
	sort(all(fn));
	int ans=n;
	for(int y=0; y<n; y++)
	{
		vector<pair<int,int>> u,d;
		for(int j=0; j<n; j++)
		{
			if(fn[j].s<=fn[y].s)
			u.pb(fn[j]);
			else
			d.pb(fn[j]);
		}
		int uI=0, dI=0;
		while(uI<u.size() || dI<d.size())
		{
			int max=INT_MAX;
			if(uI<u.size())
			{
				max=fmin(max, u[uI].f);
			}
			if(dI<d.size())
			{
				max=fmin(max, d[dI].f);
			}
			while(uI<u.size() && u[uI].f==max)
			uI++;
			while(dI<d.size() && d[dI].f==max)
			dI++;
			
			ans=fmin(ans, fmax(fmax(uI, u.size()-uI), fmax(dI, d.size()-dI)));
		}
	}
	cout<<ans<<endl;
}

