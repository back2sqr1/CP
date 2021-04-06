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
int main() {
	vector<int> nums;
	int i=0;
	while(i<1000)
	{
		int num;
		cin>>num;
		nums.pb(num);
		i++;
	}
	ll prod=1;
	ll max=0;
	for(int j=0; j<1000; j++)
	{
		for(i=0; i<13; i++)
		{
			if(nums[j+i]==0)
			{
				prod=0;
				break;
			}
			prod*=nums[j+i];
		}
		max=fmax(prod,max);
		cout<<j+1<<' '<<prod<<endl;
		prod=1;
	}
	cout<<max<<endl;
}

