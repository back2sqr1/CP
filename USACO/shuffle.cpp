/*
	ID: theredh1
	LANG: C++
	PROG: shuffle
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

int main() {
  setIO("shuffle");
  ll n;
  cin>>n;
  vector<ll> cows, ids;
  int i=0;
  while(i<n)
  {
  	ll num;
  	cin>>num;
  	cows.pb(num);
  	i++;
  }
  i=0;
  while(i<n)
  {
  	ll num;
  	cin>>num;
  	ids.pb(num);
  	i++;
  }
	ll ans[n], Two[n], three[n];
  for( i=0; i<cows.size(); i++)
  {
  	ans[i]=ids[cows[i]-1];
  }
  	for(int i=0; i<n; i++)
	{	
		Two[i]=ans[cows[i]-1];
	}
	for(int i=0; i<n; i++)
	{	
		three[i]=Two[cows[i]-1];
	}
  for( i=0; i<n; i++)
  {
  	cout<<three[i]<<endl;
  }
}

