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
int n,hills[1000];

int main()
{
	freopen("skidesign.in", "r", stdin);
	freopen("skidesign.out", "w", stdout);
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> hills[i];
	int mincost=1000000000;
	for (int i=0; i<=83; i++)
	{
		int cost=0,x;
		for (int j=0; j<n; j++)
		{
			if (hills[j]<i)
			{
				x=i-hills[j];
			}
			else if (hills[j]>i+17)
			{
				x=hills[j]-(i+17);
			}
			else
				x=0;
			cost+=x*x;
		}
		mincost=min(mincost,cost);
	}
	cout << mincost << "\n";
	
}
