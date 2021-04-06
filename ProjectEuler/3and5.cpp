/*
	ID: theredh1
	LANG: C++
	PROG: 
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
	int sum=0;
	int i=1000;
	while(i--)
	{
		if(!((i)%3) || !((i)%5))
		{
			sum+=i;
			cout<<i<<endl;
		}
	}
	cout<<sum;
}


