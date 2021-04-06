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
int main() {
    //setIO("gymnastics");
    ll n;
    cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		v.pb(a);
	}
	ll ans=0;
	for(int i=0; i<n; i++)
	for(int j=i; j<n; j++)
	{
		ll avg=0, nums=0;
		for(int k=i; k<=j; k++)
		{
			avg+=v[k];
			nums++;
		}
		if(avg%nums!=0)
		continue;
		avg/=nums;
		for(int k=i; k<=j; k++)
		{
			if(v[k]==avg)
			{
				ans++;
				break;
			}
		}
	}
	cout<<ans<<endl;
}
