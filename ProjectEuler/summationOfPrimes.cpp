#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isPrime(ll n)
{
	int i=2;
	bool flag=false;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			return false;
		}
		i++;
	}
	return true;
}
int main() {
	ll i, sum=5;
	for(i=5; i<2000000; i++)
	{
		if(isPrime(i))
		{
			sum+=i;
			cout<<sum<<' '<<i<<endl;
		}
	}
	cout<<sum;
}


