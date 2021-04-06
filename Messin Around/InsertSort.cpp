#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void InsertSort(int arr[], int n)
{
	for(int i=1; i<n;i++ )
	{
		int value=arr[i];
		int hole=i;
		while(hole>0 && arr[hole-i]>value)
		{
			arr[hole]=arr[hole-1];
			hole=hole-1;
		}
		arr[hole]=value; 
	}
}
int main() { 
	 int nums[5]={5,4,7,8,2};
	 InsertSort(nums, 5);
	 for(int i=0; i<sizeof(nums)/sizeof(nums[0]); i++)
	 {
	 	cout<<nums[i]<<" ";
	 }
}

