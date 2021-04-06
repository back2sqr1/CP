#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int j=1; j<20; j++)
	{
		for(int i=0; i<s.length(); i++)
		{
			cout<<s[i]<<' ';
		}
		cout<<endl;
		cin>>s;
		
	}
}
