#include <bits/stdc++.h>
using namespace std;
int main() {
// solution comes here
	long x;
	cin>>x;
	cout<<x<<" ";
	while(x!=1)
	{
		if(x%2==0)
		{
			x/=2;
			cout<<x<<" ";
		}
		else{
		x*=3;
		x++;
		cout<<x<<" ";
		}
	}
}

