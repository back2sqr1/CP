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
		cout<<dig<<' ';
		if (dig > '9')
			dig = dig + 'A' - '9' - 1;
			cout<<dig<<' ';
		y = dig + y;
		x = x / b;
		cout<<y<<endl;
	}
	return y;
	
}


int main() { 
	cout<<changeBases(4, 25);
}


