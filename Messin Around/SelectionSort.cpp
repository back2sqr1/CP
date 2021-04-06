#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int iMin=i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j]<arr[iMin])
			{
				iMin=j;	
			}	
		}
		int temp=arr[i];
		arr[i]=arr[iMin];
		arr[iMin]=temp;	
	}	
}
int main() {
    int arr[10]={9,23,52,53,4,5,1,12,34,2};
    SelectionSort(arr, 10);
    for(int i=0; i<10; i++)
    cout<<arr[i]<<" ";
}
