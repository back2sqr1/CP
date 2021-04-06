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

int main()
{
	freopen("skidesign.in", "r", stdin);
	freopen("skidesign.out", "w", stdout);
	int n, cost=100000000, temp=0;
	cin>>n;
	vector<int> hill;
	int max=0;
	for(int i=0; i<n; i++)
	{
		int num;
		cin>>num;
		max=fmax(max, num);
		hill.pb(num);
	}
	pair<int,int> most=MP(0,0);
	for(int j=1; j<=max-17; j++)
	{
	for(int i=0; i<n; i++)
	{
		if(hill[i]<j)
		temp+=(j-hill[i])*(j-hill[i]);
		else if(hill[i]>j+17)
		temp+=(hill[i]-(j+17))* (hill[i]-(j+17));
	}
	cost=fmin(temp, cost);	
	temp=0;
	}
	cout<<cost<<endl;
}
