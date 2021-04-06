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
    //setIO("ariprog");
    int n,x, i=0;
    cin>>n>>x;
    map<int,int> map;
    while(i<n)
    {
    	int num;
    	cin>>num;
    	if(num>=x)
    	{
    		i++;
    		continue;
		}
    	
    	if(map[num]==0)
    	map[num]=i+1;
    	else 
    	map[-num]=i+1;
    	i++;
    	
    	if(map.count(x-num) && i!=map[x-num])
    	{
    		cout<<i<<' '<<map[x-num]<<endl;
    		return 0;
		}
		if(map.count(-x+num) && i!=map[-x+num])
		{
			cout<<i<<' '<<map[-x+num]<<endl;
			return 0;
		}
	}
    
	cout<<"IMPOSSIBLE"<<endl;
}

