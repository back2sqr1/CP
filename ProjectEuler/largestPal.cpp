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
bool isPal(ll n)
{
	string str=to_string(n);
	string rev=str;
	reverse(rev.begin(), rev.end());
	if(rev.compare(str)==0)
	{
		return true;
	}
	return false;
}
int main() {
	ll a=999, b=999;
	ll max=0;
	for(int i=a; i>0; i--)
	for(int j=b; j>0; j--)
	{
		if(j<900 || i<900)
		break;
		
		ll mult= i*j;
		if(isPal(mult))
		{
			cout<<mult<<' '<<i<<' '<<j<<endl;
			max=fmax(max, mult);
		}
	}
	cout<<max<<endl;
}


