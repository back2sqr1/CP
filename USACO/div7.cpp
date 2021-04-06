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
   	setIO("div7");
    int N;
    cin>>N;
    ll ans=0;
    ll pre[N+1];
    pre[0]=0;
    for(int i=1; i<=N; i++)
    {
    	ll n;
    	cin>>n;
    	pre[i]=pre[i-1]+n;
//    	if(pre[i]%7==0)
//    	ans=pre[i];
	}
	int max=0;
	for(int l=0; l<=N; l++)
	{
		for(int r=N; r>l; r--)
		{
			if(max>r-l)
			break;
			if((pre[r]-pre[l])%7==0)
			max=fmax(r-l, max);
			
		//	cout<<r-l<<endl;
		}
	}
	cout<<max<<endl;
}

