#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))

using namespace std;
int main() { 
	ll n, sum;
	cin>>n;
	if((n*(n+1))%4!=0)
	{
		cout<<"NO";
		return 0;	
	} 

	vector<ll> v1,v2;
	int j=0;
	if(n%4)
		j=3;
	else
		j=4;
	for(int i=0; i<(n-1)/4; ++i)
	{
		v1.pb(4*i+1+j);
		v1.pb(4*i+4+j);
		v2.pb(4*i+2+j);
		v2.pb(4*i+3+j);
	}
	if(n%4){
		v1.pb(1);
		v1.pb(2);
		v2.pb(3);
	}
	else
	{
		v1.pb(1);
		v1.pb(4);
		v2.pb(3);
		v2.pb(2);
	}
	cout<<"YES\n";
	cout<< v1.size()<<endl;
	for(int i:v1)
	{
		cout<<i<<' ';
	}
	cout<<endl;
	cout<<v2.size()<<endl;
	for(int i:v2)
	{
		cout<<i<<' ';
	}
	cout<<"\n";
	}
