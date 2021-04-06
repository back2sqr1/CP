#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))
using namespace std;

 int countClumps(int nums[], int length) {
  bool clumps=false;
	int clump=0;
	for(int i=0; i<length-1; i++)
	{
	  if(nums[i+1]==nums[i])
    {
      clumps=true;
      i++;
      while(clumps)
      {
        if(i==length-1)
        break;
        
        if(nums[i+1]!=nums[i]){
        clumps=false;
        break;
        }        
        i++;
      }
      clump++;
    }
	}
	return clump;
}
int main() { 
 int arr[5]={1,1,1,1,1};
	cout<<countClumps(arr,5);
}
