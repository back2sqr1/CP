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
ll GCD(ll a, ll b)
{
	if(a==0)
	{
		return b;
	}
	return GCD(b%a, a);
}
ll LCM(ll a, ll b)
{
	return a*b/GCD(a,b);
}
int main() {
	ll num=1;
	for(int i=1; i<=20; i++)
	{
		num=LCM(num,i);
		cout<<num<<endl;
	}
}


