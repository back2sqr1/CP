#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
int main() { 
	ll a=10;
	ll *p=&a;
	cout<<(int)p<<' '<<a<<endl;
	*p=69;
	cout<<(int)p+2<<' '<<*(p+2)<<endl;
} 
