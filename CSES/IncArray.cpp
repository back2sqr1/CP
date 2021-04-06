#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() { 
	ll n;
	cin>>n;
	int i;
	ll arr[n];
	ll t=0;
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<n-1; i++)
	{
		if(arr[i]>arr[i+1])
		{
			t+=arr[i]-arr[i+1];
			arr[i+1]=arr[i];
		
		}	
	}
	cout<<t;
}
