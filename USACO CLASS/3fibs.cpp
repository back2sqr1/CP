#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int dp[100];
int fibR(int n)
{
	if(n==1 ||n==2)
	return 1;
	
	return fibR(n-2)+fibR(n-1);
}
int main() {
	int n;
	cin>>n;
	cout<<fibR(n)<<endl;
}


