/*
	ID: theredh1
	LANG: C++
	PROG: 
*/
#define pb push_back
#define PB pop_back
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string changeBases(ll b, ll x)
{
	string num="";
	char digit;
	for(int i=x; i>0; i/=b)
	{
		digit=i%b+'0';
		if(i%b>9)
		{
			digit+='A'-'0'-10;
		}
		
		num=digit+num;
	
	}
	return num;
}
int main() {
	

}


