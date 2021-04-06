#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
	vector<ll> ans;
ll sum(ll n)
{
	ll sum=0;
	while(n!=0)
	{	
		sum+=n%10;
		n/=10;
	}
	return sum;
}
ll CUBES(ll start)
{
	if(start>=21952)
	return 0;
	if(sum(start)<=25 || sum(start)>=28)
	return CUBES(start+1);
	if(start<=15625)
	return CUBES(15626);
	
	if(start==(ll)pow(sum(start),3)){
	ans.push_back(start);
	return CUBES(start+1);
}
	else{
	return CUBES(start+1);
}
}
int main() { 
	ll n;
	cin>>n;
	CUBES(n);
	for(int i=0; i<ans.size(); ++i)
  	cout << ans[i] << ' ';
}

