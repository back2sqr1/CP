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
string changeBases(ll b, ll x)
{
	string y;
	while (x>0)
	{
		char dig = ('0' + x % b);
		if (dig > '9')
			dig = dig + 'A' - '0'-10;
		y = dig + y;
		x = x / b;
	}
	return y;
	
}
bool check(string s)
{
	string x=s;
	reverse(x.begin(), x.end());
	if(s.compare(x)==0)
	{
		return true;
	}
	return false;
}
int main() {
//	freopen("barn1.in", "r", stdin);
//	freopen("barn1.out", "w", stdout);
	ll s;
	cin>>s;
	for(int i=2; i<=20; i++)
	{
		if(check(changeBases(i,s)))
		{
			cout<<i<<' '<<changeBases(i,s)<<endl;
		}
	}
}


