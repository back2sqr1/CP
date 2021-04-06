/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
	//setIO("angry");
  	ll n, x;
  	cin>>n>>x;
  	vector<int> v;
  	for(int i=0; i<n; i++)
  	{
  		int num;
		cin>>num;
		v.pb(num); 	
	}
	sort(all(v));
	ll i=0, j=n-1, ans=0;
	while(i<j)
	{
		if(v[i]+v[j]>x)
		{
			ans++;
			j--;
		}
		else
		{
			ans++;
			i++;
			j--;
		}
	}
	if(i==j)
	ans++;
	
	cout<<ans<<endl;
}

