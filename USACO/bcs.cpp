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
#define max 8
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
int n, m;
struct MultArray{
	char arr[max][max];
};
bool isEqual(MultArray a, MultArray b)
	{
		for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
		{
			if(a.arr[i][j]!=b.arr[i][j])
			return false;
		}
		return true;
	}
int main() {
   	//setIO("bcs");
  	int n,k;
	cin>>n>>k;
	MultArray cow;
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
	{
		cin>>cow.arr[i][j];
	}  
}

