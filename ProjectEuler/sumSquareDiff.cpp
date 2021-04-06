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
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
int main() {
	ll n=100;
	ll sum=(n*(n+1))/2;
	ll sum1=0;
	for(int i=1; i<=100; i++)
	{
		sum1+=i*i;
		cout<<sum1<<endl;
	}
	cout<<sum*sum-sum1<<endl;
}


