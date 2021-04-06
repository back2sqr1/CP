#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))
using namespace std;
int main() { 
	ll n;
	cin>>n;
	ll ctr=0;
	int x,y,z;
	for(int i=0; i<n; i++)
	{
		cin>>x>>y>>z;
		if(x==y && x==1 || x==z && x==1 || y==z && z==1)
		{
			ctr++;	
		}
	}
	cout<<ctr<<endl;
}
