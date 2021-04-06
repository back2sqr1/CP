#include <bits/stdc++.h>
typedef long long ll;
#define SQ(a) ((a)*(a))
using namespace std;
int main() { 
	ll k;
	cin>>k;
	//1,1 1,8 8,8 8,1 62*4
	//1,2 61
	//2,1 61
	//3+,1 60 *5
	//1,3+ 60*5
	//2,3+ 58*5
	//3+,2 58*5
	//3+,3+ 56*5
	for(ll i=1; i<=k; i++)
	{
		cout<<((SQ(i)*(SQ(i)-1)/2)-(8*(i-2)*(i-1)/2))<<endl;
	}
}
