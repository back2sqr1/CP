/*
	ID: theredh1
	LANG: C++
	PROG: diamond
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
        cout<<v[i]<<endl;
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
int main() {
	ios_base::sync_with_stdio(false);
	setIO("homework");
	int n;
	cin>>n;
	vector<ll> v;
	ll preS[n+1], preM[n];
	preS[0]=0;
	for(int i=1; i<=n; i++)
	{
		int num;
		cin>>num;
		preS[i]=preS[i-1]+num;
		v.pb(num);
	}
	preM[n-1]=v[n-1];
	for(int i=n-2; i>=0; i--)
	{
		preM[i]=fmin(preM[i+1],v[i]);
	}
//	cout<<endl;
//	showarr(preS, n+1);
//	cout<<endl;
//	showarr(preM, n);
	double max=0;
	vector<ll> ks;
	ll k=0;
	for(int i=1; i<n-1; i++)	
	{
		double temp=preS[n]-preS[i];
		temp-=preM[i];
	//	cout<<"TEMP"<<' '<<temp<<' ';
		temp=temp/(n-i-1);
	//	cout<<temp<<endl;
		if(temp>max)
		{
			max=temp;
			ks.clear();
			ks.pb(i);
		//	cout<<k<<' '<<max<<endl;
		}
		else if(temp==max)
		{
			ks.pb(i);
		}
	}
	show(ks);
}
