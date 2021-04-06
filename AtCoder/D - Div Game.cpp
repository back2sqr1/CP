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
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
int factor(ll n){
	vector<ll> ret;
	for(ll i=2; i*i<=n; i++)
	{
		while(n%i==0)
		{
			ret.pb(i);
		//	cout<<i<<' ';
			n/=i;
		}
	}
	if(n>1) ret.pb(n);
	
	map<int,int> map;
	for(int i=0; i<ret.size(); i++)
	{
		if(map[ret[i]]==0)
		map[ret[i]]=1;
		else
		map[ret[i]]++;
	}
	ll ans=0;
	for(auto x: map)
	{
		int sub=1;
		while(x.s-sub>=0)
		{
			x.s-=sub;
			ans++;
			sub++;
		}
	}
	return ans;
}
int main() {
   //setIO("moop");
   	ll n;
   	cin>>n;
	cout<<factor(n)<<endl;
}	
