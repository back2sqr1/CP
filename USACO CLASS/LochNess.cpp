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
int main() {
		ll t;
		cin>>t;
		for(int i=0; i<t; i++)
		{
			ll a,b;
			cin>>a>>b;
			a=round(a/3);
			b=round(b/3);
			
			cout<<a*b<<endl;
		}
}


