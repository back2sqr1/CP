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
const int mxN=2e5;
ll a[mxN];
int main() {
   	setIO("maxcross");
    int n, k, b;
    cin>>n>>k>>b;
    vector<int> v;
    bool max=false;
    int prev=0;
    for(int i=0; i<b; i++)
    {
    	int num;
    	cin>>num;
    	v.pb(num);
	}
	v.pb(n+1);
	v.pb(0);
	sort(all(v));
	//cout<<v[1]<<' '<<v[0]<<endl;
	for(int i=b+1; i>0; i--)
	{
		if(v[i]-v[i-1]-1>=k)
    	{
    		cout<<0<<endl;
    		return 0;
		}
		//cout<<v[i]<<' '<<v[i-1]<<endl;
	}
	int fixed=1;
	bool flag=false;
	while(fixed<=b)
	{
		for(int i=0; i<b-fixed-1; i++)
		{
			
			if(v[i+fixed+1]-v[i]-1>=k)
			{
				flag=true;
				break;
			}
		}
		if(flag)
		break;
		
		fixed++;
	}
	if(!flag)
	fixed=b;
	
	
	cout<<fixed<<endl;
}

