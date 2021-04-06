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
ll n, p, MIN=INT_MAX;
vector<ll> times;
bool check(ll t)
{
	ll m=0;
	for(int i=0; i<n; i++)
	{
		m+=t/times[i];	
	}
	return m>=p;
}
int main() {
	//setIO("angry");
  	cin>>n>>p;
  	for(int i=0; i<n; i++)
  	{
  		int num;
  		cin>>num;
  		times.pb(num);
  		MIN=fmin(MIN, num);
	}
	ll small=1, big=MIN*p;
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

