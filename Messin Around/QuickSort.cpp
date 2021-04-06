#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int Partition(int A[],int start,int end)
{
	int pivot=A[end];
	int pIndex=start;
	for(int i=start; i<=end-1; i++)
	{
		if(A[i]<=pivot)
		{
			swap(A[i], A[pIndex]);
			pIndex=pIndex+1;
		}
	}
	swap(A[pIndex], A[end]);
	return pIndex;
}
void QuickSort(int A[],int start,int end){
	if(start>=end) 
	return;
	
	int pIndex= Partition(A, start, end);
	QuickSort(A,start,pIndex-1);
	QuickSort(A, pIndex+1, end);
}

int main() {
	int A[7]={2,4,1,5,6,7,3};
	QuickSort(A, 0,7);
	for(int i=0; i<7; i++)
	{
		cout<<A[i]<<' ';
	}
}

