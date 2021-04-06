/*
	ID: theredh1
	LANG: C++
	PROG: barn1
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define MT make_tuple
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int pos[251];
bool check(int n, int m, int start, int prog)
{
	bool flag=false;
	for(int i=0; i<n; i++)	
	for(int p=0; p<=m; p++)
	{
		for(int q=0; q<=m; q++)
		{
			if(pos[p]+pos[q]>start+i*prog)
			return false;
			if(pos[p]+pos[q]==start+i*prog)
			{
				cout<<p<<" "<<q<<endl;
				flag=true;
				break;
			}
			if(p==m && q==m)
			return false;
		}
		if(flag)
		{
			flag=false;
			break;
		}
	}
	return true;
}
int main() { 
	for(int i=0; i<251; i++)
	{
		pos[i]=i*i;
	}
	int n,m;
	cin>>n>>m;
	cout<<check(n,m,6,12)<<endl;
}

