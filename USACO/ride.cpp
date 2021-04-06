/*
	ID: theredh1
	LANG: C++
	PROG: ride
*/

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() { 
	freopen("ride.in", "r", stdin);
	string s1,s2;
	cin>> s1;
	cin>>s2;
	freopen("ride.out", "w", stdout);
	int product1=1;
	int product2=1;
	for(int i=0; i<s1.length(); i++)
	{
		int x= s1[i]-64;
		product1=product1*x;
	}
	for(int i=0; i<s2.length(); i++)
	{
		int x=s2[i]-64;
		product2=product2*x;	 
	}
	if(product1%47==product2%47)
	{
		cout<<"GO"<<endl;
	}
	else{
		cout<<"STAY"<<endl;
	}

}


