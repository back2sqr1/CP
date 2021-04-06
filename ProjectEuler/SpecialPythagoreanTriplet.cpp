#define pb push_back
#define PB pop_back
#define MP make_pair
#define MT make_tuple
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
bool isTrip(int a, int b, int c)
{
	return a*a+b*b==c*c;
}
int main() {
	bool notTrip=true;
	
	for(int k=0; k<1000; k++)
	for(int j=0; j<1000; j++)
	for(int i=0; i<1000; i++)
	{
		if(isTrip(k, j, i) && k+j+i==1000)
		{
			cout<<k*j*i<<endl;
		}
	}
}
