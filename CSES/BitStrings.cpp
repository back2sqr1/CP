#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))
using namespace std;

int main() { 
	ll n;
	int p;
	cin>>n;
	
	if(n==1)
	{
		cout<<2;
		return 0;
	}
	ll mod=1;
	for(int i=1; i<=9; i++)
	{
		mod*=10;
	}
	mod+=7;
	p=1;
	for(int i=1; i<=n; i++)
	{
		p*=2;
		p%=mod;
	}
	cout<<p;
}
