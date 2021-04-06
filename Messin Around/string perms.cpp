#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
void next_perm(string s, int l, int r)
{
	if(l==r)
	cout<<s<<endl;
	else
	{
		for(int i=l; i<=r; i++)
		{
			swap(s[l], s[i]);
			next_perm(s, l+1, r);
			swap(s[l], s[i]);
		}
	}
}
int main() { 
	string s;
	cin>>s;
	next_perm(s, 0, s.length()-1);
}


