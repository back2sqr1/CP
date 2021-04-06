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
   	//setIO("balancing");
    int n, x;
    cin>>n>>x;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++)
    {
    	int num;
    	cin>>num;
    	v.pb(mp(num, i));
	}
	sort(all(v));
	for(int i=0; i<n; i++)
	{
		int j=i+1, k=n-1, diff=x-v[i].f;
		//cout<<diff<<endl;
		while(j<k)
		{
			if(v[j].f+v[k].f==diff)
			{
				cout<<v[i].s+1<<' '<<v[j].s+1<<' '<<v[k].s+1<<endl;
				return 0;
			}
			else if(v[j].f+v[k].f<diff)
			{
				j++;
			}
			else
			k--;
			//cout<<v[i].f<<' '<<v[j].f<<' '<<v[k].f<<endl;
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
}

