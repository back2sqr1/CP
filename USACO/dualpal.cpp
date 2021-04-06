/*
	ID: theredh1
	LANG: C++
	PROG: dualpal
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

bool TwoPlusPals(ll s)
{
	int ctr=0;
	
		for(int j=2; j<=10; j++)
		{
			if(ctr==2)
			return true;
			string numStr=changeBases(j,s);
			string r=numStr;
			reverse(numStr.begin(), numStr.end());
			if(r.compare(numStr)==0)
			{
			
				ctr++;
			}
			
		}
		if(ctr==2)
			return true;
		return false;
}
int main() {
	freopen("dualpal.in", "r", stdin);
	freopen("dualpal.out", "w", stdout);
	int n;
	cin>>n;
	ll s;
	cin>>s;
	ll count=0;
	ll it=1;
	while(n!=count)
	{
		if(TwoPlusPals(s+it))
		{
			cout<<s+it<<endl;
			count++;
		}
		it++;
	}
}


