/*
	ID: theredh1
	LANG: C++
	PROG: transform
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct multArr
{
	char arr[10][10];
	int length;
};
bool equals(multArr before, multArr after)
{
	if(before.length!=after.length)
	return false;
	
	for(int i=0; i<before.length; i++)
	for(int j=0; j<before.length; j++)
	{	
		if(before.arr[i][j]!=after.arr[i][j])
		{
			return false;
		}
	}
	return true;
}
multArr ninety(multArr before)
{
	multArr after;
	after.length=before.length;
	for(int i=0; i<before.length; i++)
	for(int j=0; j<before.length; j++)
	{
		after.arr[j][after.length-1-i]=before.arr[i][j];
	}
	return after;
}
multArr oneeighty(multArr before)
{
	return ninety(ninety(before));
}
multArr twoseventy(multArr before)
{
	return oneeighty(ninety(before));
}
multArr reflect(multArr before)
{
	multArr after;
	after.length=before.length;
	for(int i=0; i<after.length; i++)
	for(int j=0; j<after.length; j++)
	{
		after.arr[i][after.length-j-1]=before.arr[i][j];
	}
	return after;
}
int main() {
	freopen("transform.in", "r", stdin);
	freopen("transform.out", "w", stdout);
	ll n;
	cin>>n;
	multArr before, after;
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
	{
		char num;
		cin>>num;
		before.arr[i][j]=num;
	}
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
	{
		char num;
		cin>>num;
		after.arr[i][j]=num;
	}
	before.length=n;
	after.length=n;
	
	if(equals(ninety(before), after))
	cout<<1<<endl;
	else if(equals(oneeighty(before), after))
	cout<<2<<endl;
	else if(equals(twoseventy(before), after))
	cout<<3<<endl;
	else if(equals(reflect(before), after))
	cout<<4<<endl;
	else if(equals(reflect(ninety(before)), after) 
	|| equals(reflect(oneeighty(before)), after) 
	|| equals(reflect(twoseventy(before)), after))
	cout<<5<<endl;
	else if(equals(before, after))
	cout<<6<<endl;
	else
	cout<<7<<endl;
	
}


