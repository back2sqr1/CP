#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() { 
	ll n;
	cin>>n;
	int a[n-1];
	int f[200001]={0};
	for(int i=0; i<n-1; i++)
	{
		cin>>a[i];
		f[a[i]]++;
	}
	sort(a,a+n);
	for(int i=1; i<200001; i++)
	{
		if(f[i]==0)
		{
			cout<<i;
			break;
		}
	}
}
