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
bool isPrime(ulli n)
{
	int i=2;
	bool flag=false;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			flag=true;
			break;
		}
		++i;
	}
	return !flag;
}
int main() {
	ll ctr=0;
	for(int i=2; ctr<10001; i++)
	{
		if(isPrime(i))
		{
			ctr++;
			cout<<i<<' '<<ctr<<endl;
		}
	}
}
