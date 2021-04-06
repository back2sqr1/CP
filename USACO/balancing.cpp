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
    cin>>n>>temp;    
    vector<int> x,y;
    vector<pair<int,int>> fn;
    for(int i=0; i<n; i++)
    {
    	int num1, num2;
    	cin>>num1>>num2;
    	x.pb(num1);
    	y.pb(num2);
    	fn.pb(mp(num1,num2));
	}
//	cout<<fn.size()<<endl;
	int ans=INT_MAX;
	for(int num=0; num<x.size(); num++)
	{
		for(int num2=0; num2<n; num2++)
		{
			int u1=0,u2=0,d1=0,d2=0;
			
			for(auto ys: fn)
			{
				if(ys.f<x[num]+1)
				{
					if(ys.s<y[num2]+1)
					{
						d1++;
					}
					else
					u1++;
				}
				else
				{
					
					if(ys.s<y[num2]+1)
					{
						d2++;
					}
					else
					u2++;
				}
			}
		//	cout<<u1.size()<<' '<<d1.size()<<' '<<u2.size()<<' '<<d2.size()<<endl;
		ans=fmin(ans, fmax(u1, fmax(u2,fmax(d1,d2))));	
		}
	}
	 cout<<ans<<endl;
}

