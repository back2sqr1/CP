#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll> perm={2,4,1,3};

int main() { 
	ll n; 
	cin>>n;		
	int i;
	if(n==2||n==3)
	{
		cout<<"NO SOLUTION";
		return 0;
	}
	for(i=2; i<=n; i+=2)
	{
		cout<<i<<" ";
	}
	for(i=1; i<=n; i+=2)
	{
		cout<<i<<' ';
	}
	
}
