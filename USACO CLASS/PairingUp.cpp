/*
	ID: theredh1
	LANG: C++
	PROG: barn1
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define MT make_tuple
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std; 
int pairings[12];
int Pairs(int n)
{
	int i;
	int count=0;
	for(i=1; i<=n; i++)
	{
		if(pairings[i]==0)
		break;
	}
	if(i>n)
		return 1;
	for(int j=i+1; j<=n; j++)
	{
		if(pairings[j]==0)
		{
			pairings[i]=j;
			pairings[j]=i;
			count+=Pairs(n);
			pairings[i]=pairings[j]=0;
		}
	}
	return count;
}
int main() {
	int n;
	cin>>n;
	cout<<Pairs(n)<<endl;
}

