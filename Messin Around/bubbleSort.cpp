#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void BubbleSort(int arr[], int n)
{
	for(int k=0; k<n-k; k){
		int flag=0;
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]>arr[i+1])
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			flag=1;
		}
	}
	if(flag==0) break;
	}
}
int main() { 
	int nums[5]={4,3,5,6,2};
	BubbleSort(nums, 5);
	for(int i=0; i<sizeof(nums)/sizeof(nums[0]); i++)
	{
		cout<<nums[i]<<" ";
	}
}

