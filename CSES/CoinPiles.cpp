#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))
using namespace std;
int main() { 
	ll n;
	cin>>n;
	ll a,b;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		cin>>b;
		cout<<((a+b)%3==0 && a*2>=b && 2*b>=a ? "YES" : "NO")<<endl;
	}
}
