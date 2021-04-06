#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))
using namespace std;
bool dp(ll x, ll y)
{
	if(x==0 && y==0)
	{
		return true;
	}
		if(x<1 || y<1)
		{
			return false;
		}
		if(x==1 && y!=2 || y==1 && x!=2)
		{
			return false;
		}
	
	bool r= dp(x-2,y-1) || dp(x-1,y-2);
	
	return r;
}
int main() { 
	ll n;
	cin>>n;
	ll x,y;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		cin>>y;
		if(dp(x,y))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
