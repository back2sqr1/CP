#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))
using namespace std;
int zeros=0;
ll factor(ll n)
{
	ll count=0;
	for(int i=5; n/i>0; i*=5)
	{
		count+=n/i;
	}
	return count;
}
int main() { 
	ll n;
	cin>>n;
	cout<<factor(n);
}
