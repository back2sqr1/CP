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
int n, x;
vector<int> v;
ll s(int l, int r)
{
	int sum=0;
	for(int i=l; i<=r; i++)
	{
		sum+=v[i];
	}
	//cout<<endl;
	return sum;
}
int main() {
   	//setIO("balancing");
    cin>>n>>x;
    for(int i=0; i<n; i++)
    {
    	int num;
    	cin>>num;
    	v.pb(num);
	}
//	for(int i=0; i<n; i++)
//	cout<<v[i]<<endl;
    //cout<<"j"<<endl;
    int l=0, r=0;
    ll ans=0, last=v[l], a=v[l];
    while(l<=r && l<n && r<n)
    {
    	if(a==x)
    	{
    		ans++;
    		r++;
    		if(r<n)
    		a+=v[r];
		}
		else if(a>x)
		{
			l++;
			a-=last;
			last=v[l];
		}
		else
		{
			r++;
			if(r<n)
    		a+=v[r];
		}
	//	cout<<a<<endl;
	}
	
	cout<<ans<<endl;
}

