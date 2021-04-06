/*
	ID: theredh1
	LANG: C++
	PROG: beads
*/
#define PB push_back
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() { 
	freopen("beads.in", "r", stdin);
	freopen("beads.out", "w", stdout);
	ll n;
	cin>>n;
	string s;
	cin>>s;
	string full=s+s;
	bool same=false;
	for(int i=0; i<s.length()-1; i++)
	{
		if(s[i]==s[i+1])
		same=true;
		else
		{
			same=false;
			break;
		}
	}
	if(same)
	{
		cout<<s.length()<<endl;
		return 0;
	}
	ll ctr=0, max=0;
	ll k;
	for(int i=0; i<full.length(); i++)
	{
		if(full[i]=='w')
		{
			while(full[i]=='w')
			{
				i++;
				ctr++;
			}
		}
		if(full[i]=='r')
		{
			while(full[i]=='w' || full[i]=='r')
			{
				i++;
				ctr++;
			}
			k=i;
			while(full[k]=='w' || full[k]=='b')
			{
				k++;
				ctr++;
			}
			max=fmax(ctr,max);
			ctr=0;
			
		}
		else if(full[i]=='b')
		{
			while(full[i]=='w' || full[i]=='b')
			{
				i++;
				ctr++;
			}
			k=i;
			while(full[k]=='w' || full[k]=='r')
			{
				k++;
				ctr++;
			}
			max=fmax(ctr,max);
			ctr=0;
		
		}
		
	}
	cout<<max<<endl;
}


