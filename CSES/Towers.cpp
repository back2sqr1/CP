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
	ll n, ans=1;
	cin>>n;
  	multiset<int> v;
  	for(int i=0; i<n; i++)
  	{
  		ll num;
		cin>>num;
		auto x=v.upper_bound(num);
		if(x==v.end())
		{
			v.insert(num);	
		}
		else
		{
			v.erase(x);
			v.insert(num);	
		}	
	}
	cout<<v.size()<<endl;
}

