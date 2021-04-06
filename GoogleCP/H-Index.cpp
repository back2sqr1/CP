#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
//  9/6/2020
typedef long long ll;
using namespace std;
bool check(vector<int> nums, int largest)
{
	int ctr=0;
	for(int i=0; i<nums.size(); i++)
	{
		if(nums[i]>=largest)
		ctr++;
	}
	return ctr==largest;
}
int main() {
	int t;
	cin>>t;
	int j=1;
	while(j<=t)
	{
		ll n, largest=0, ctr=0;
		cin>>n;
		vector<int> H, nums;
		while(n--)
		{
			ll num;
			cin>>num;
			nums.pb(num);
			if(check(nums, largest+1))
			largest++;
			H.pb(largest);
		}
		cout<<"Case #"+to_string(j)+":";
		for(int i=0; i<H.size(); i++)
		{
			cout<<" "<<H[i];
		}
		cout<<endl;
		j++;
	}
}


