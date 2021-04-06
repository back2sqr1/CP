/*
	ID: theredh1
	LANG: C++
	PROG: palsquare
*/
#define pb push_back
#define PB pop_back
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string changeBases(ll b, ll x)
{
	string y;
	while (x>0)
	{
		char dig = ('0' + x % b);
		if (dig > '9')
			dig = dig + 'A' - '9' - 1;
		y = dig + y;
		x = x / b;
	}
	return y;
	
}

int main() {
	
	freopen("palsquare.in", "r", stdin);
	freopen("palsquare.out", "w", stdout);
	ll n;
	cin>>n;
	for(int j=1; j<300; j++)
	{
		ll SQj=j*j;
		string t = changeBases(n, SQj);
		
		string r=t;
		reverse(r.begin(),r.end());
		
		
		if(t.compare(r)==0)
		{
			cout<<changeBases(n,j)<<' '<<t<<endl;
		}
	}
}


