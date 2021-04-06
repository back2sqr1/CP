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

int ans;
int n;
vector<ll> v;
ll solve(int i, ll sum1, ll sum2)
{
	if(i==n)
	{
		return abs(sum1-sum2);
	}
	return fmin(solve(i+1, sum1+v[i], sum2), solve(i+1, sum1, sum2+v[i]));
}
int main() {
   	cin>>n;
   	for(int i=0; i<n; i++)
   	{
   		ll num;
   		cin>>num;
   		v.pb(num);	
	}
	int ans=solve(0,0,0);
	cout<<ans<<endl;
}

