#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int fibF(int n)
{
	int fib[n+1];
	fib[0]=0;
	fib[1]=1;
	fib[2]=1;
	for(int i=3; i<=n; i++)
	{
		fib[i]=fib[i-2]+fib[i-1];
	}
	return fib[n];
}
int main() {
	int n;
	cin>>n;
	cout<<fibF(n)<<endl;
}



