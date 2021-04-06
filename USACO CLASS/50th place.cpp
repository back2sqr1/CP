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
using namespace std;
string compute(int x, int y, int n)
{
	if(n==0)
	return "";
	
	string ans="";
	ans+=to_string(x/y);
		
	if(x/y!=0)
	{
		x=x%y;
	}
	x*=10;
	return ans+compute(x, y, --n);
}
int main() {
	int x,y,z; //x is numerator, y is denominator, z is amt of digits
	cin>>x>>y>>z;
	string ans=compute(x,y,z);
	string one=to_string(x/y)+'.', two=ans.substr(1,ans.length()-1);
	ans=one+two;
	cout<<ans<<endl;
}


