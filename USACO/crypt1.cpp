/*
	ID: theredh1
	LANG: C++
	PROG: crypt1
*/
//terrible
#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
bool check(ll prod, vector<ll> &nums)
{
	if(prod>10000)
	return false;
	while(prod>0)
	{
		if(find(nums.begin(), nums.end(), prod%10)==nums.end())
		return false;
		
		prod/=10;
	}
	return true;
}
int main() {
	ll set, perms=0;
	freopen("crypt1.in", "r", stdin);
	freopen("crypt1.out", "w", stdout);
	cin>>set;
	vector<ll> nums;
	for(int i=0; i<set; i++)
	{
		ll num;
		cin>>num;
		nums.pb(num);
	}
	for(int o=0; o<set; o++)
	for(int p=0; p<set; p++)
	for(int k=0; k<set; k++)
	for(int j=0; j<set; j++)
	for(int i=0; i<set; i++)
	{
		ll three=nums[k]*100+nums[j]*10+nums[i];
		ll two=nums[o]*10+nums[p];
		if(check(three*nums[p], nums) && check(three*nums[o], nums) && three*nums[p]<1000 && three*nums[o]<1000)
		if(check(three*two, nums))
		{
			perms++;
		}
	}
	cout<<perms<<endl;
}
