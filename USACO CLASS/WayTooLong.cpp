#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))
using namespace std;
int main() { 
	ll n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
	string s;
	cin>>s;
	string ans="";
	if(s.length()>10)
	{
		ans+=s[0];
		ans+=to_string(s.length()-2);
		ans+=s[s.length()-1];
	}
	else
	ans+=s;
	
	cout<<ans<<endl;
	}
}
