/*
	ID: theredh1
	LANG: C++
	PROG: angry
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
ll n, k;
vector<ll> v;
bool check(ll s)
{
	ll sum=0, ks=1;
	for(int i=0; i<n; i++)
	{
		sum+=v[i];
		
		if(v[i]>s)
		return false;
		
		if(sum>s)
		{
			ks++;
			sum=v[i];
		}
	}
	return ks<=k;
}
int main() {
	//setIO("angry");
  	cin>>n>>k;
	ll pre[n+1];
	pre[0]=0;
	for(int i=1; i<=n; i++)
	{
		ll num;
		cin>>num;
		pre[i]=pre[i-1]+num;
		v.pb(num);
	}
	ll small=pre[1], big=pre[n], res;
	while(small!=big)
	{
		ll mid=small+(big-small)/2;
		if(check(mid))
		{
			big=mid;
		}
		else
		{
			small=mid+1;
		}
	}
	cout<<small<<endl;
}

