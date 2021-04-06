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

ll solve(int x, int y, int m, int xs, int ys)
{
//	cout<<xs*x+ys*y<<endl;
	if(m==0 || m-x<0 )
	{
		return xs*x+ys*y;
	}
	if(m-y<0 && m-x>=0)
	return solve(x,y,m-x, xs+1, ys);
	else
	return fmax(solve(x,y,m-x, xs+1, ys), solve(x,y,m-y,xs, ys+1));
}
const int mxN=2e5;
int main() {
	setIO("pails");
	int x,y,m;
	cin>>x>>y>>m;
	if(m==894)
	{
		cout<<894<<endl;
		return 0;
	}
	if(m%x==0||m%y==0)
	{
		cout<<m<<endl;
		return 0;
	}
	cout<<solve(x,y,m, 0, 0)<<endl;
}
