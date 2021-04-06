/*
	ID: theredh1
	LANG: C++
	PROG: skidesign
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define MT make_tuple
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
int n;
int Max(int arr[])
{
	int max=0;
	for(int i=0; i<n; i++)
	{
		max=fmax(arr[i],max);
	}
	return max;
}
int Min(int arr[])
{
	int min=10000000;
	for(int i=0; i<n; i++)
	{
		min=fmin(arr[i],min);
	}
	return min;
}
int Find(int arr[], int e)
{
	for(int i=0; i<n; i++)
	{
		if(e==arr[i])
		{
			return i;
		}
	}
	return -1;
}
int main() {
//	freopen("skidesign.in", "r", stdin);
//	freopen("skidesign.out", "w", stdout);
	cin>>n;
	int hills[n];
	for(int i=0; i<n; i++)
	{
		cin>>hills[i];
	}
	ll  cost=0;
	for(int i=0; i<n; i++)
		cout<<hills[i]<<' ';
	cout<<endl;
	int i=0;
	while(Max(hills)-Min(hills)>17)
	{
		int max=Max(hills);
		int itr1= Find(hills, max);
		int min=Min(hills);
		int itr2= Find(hills, min);
		ll offset=(max-min-17)/2;
		cout<<max<<' '<<min<<' '<<cost<<endl;
		hills[itr1]-=offset;
		hills[itr2]+=offset;
		if(hills[itr1]-hills[itr2]>17)
		{
			cost+=offset*offset+(offset+1)*(offset+1);
			hills[itr1]--;
		}
		else
		cost+=(offset*offset)*2;
	}
	for(int i=0; i<n; i++)
		cout<<hills[i]<<' ';
	cout<<endl;
	cout<<cost<<endl;
}
