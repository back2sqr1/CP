/*
	ID: theredh1
	LANG: C++
	PROG: wormhole
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
int Onright[13], x[13], y[13], pairings[13];
bool isLoop()
{
	for(int i=1; i<=n; i++)
	{
		int cow=i;
		for(int j=0; j<n; j++)
		{
			cow=Onright[pairings[cow]];
		}	
		if(cow!=0) 
		{
			return true;
		}
	}	
	return false;
}
int Pairs()
{
	int i;
	int count=0;
	for(i=1; i<=n; i++)
	{
		if(pairings[i]==0)
		break;
	}
	if(i>n)
	{
		if(isLoop())
		return 1;
		else 
		return 0;
	}
	for(int j=i+1; j<=n; j++)
	{
		if(pairings[j]==0)
		{
			pairings[i]=j;
			pairings[j]=i;
			count+=Pairs();
			pairings[i]=pairings[j]=0;
		}
	}
	return count;
}
int main() {
	
//	freopen("wormhole.in", "r", stdin);
//	freopen("wormhole.out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>x[i];
		cin>>y[i];
	}
	for (int i=1; i<=n; i++)
    for (int j=1; j<=n; j++)
      if (x[j] > x[i] && y[i] == y[j] && (Onright[i] == 0 || x[j]-x[i] < x[Onright[i]]-x[i]))
		Onright[i] = j;
	cout<<Pairs()<<endl;
}


