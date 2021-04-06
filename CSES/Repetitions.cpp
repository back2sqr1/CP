#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() { 
	string s;
	cin>>s;
	int ctr=1;
	int result=1;
	for(int i=0; i<s.length()-1; i++)
	{
		if(s[i]==s[i+1])
		{
			ctr++;
		}
		else
		{
			ctr=1;
		}
		result=fmax(ctr,result);
	}
	cout<<result;
}
