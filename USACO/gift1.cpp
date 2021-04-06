/*
	ID: theredh1
	LANG: C++
	PROG: gift1
*/
#define PB push_back
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() { 
	
	freopen("gift1.in", "r", stdin);
	freopen("gift1.out", "w", stdout);
	int PPL;
	cin>>PPL;
	int i,j;
	vector<string> names;
	vector<int> balance;
	int minus, peopleG, AMTG, AMTL;
	string person, s, name;
	for( i=0; i<PPL; i++)
	{
		cin>>s;
		names.PB(s);
		balance.PB(0);
	}
	for( i=0; i<PPL; i++)
	{
		cin>>name;
		cin>>minus;
		cin>>peopleG;
		if(peopleG!=0)
		{
		 AMTG=minus/peopleG;
		 AMTL=minus%peopleG;
		}
		else{
			AMTG=0;
			AMTL=0;
		}
		for(j=0; j<PPL; j++)
		{
			if(minus==0)
			break;
			if(names[j]==name)
			{
				balance[j]-=minus;
				balance[j]+=AMTL;
				break;
			}
		}
		for( j=0; j<peopleG; j++)
		{
			if (minus==0)
			break;
			
			cin>>person;
			for(int k=0; k<PPL; k++)
			{
				if(names[k]==person)
				{
					balance[k]+=AMTG;
					break;
				}
			}
		}
	}
	for(int i=0; i<PPL; i++)
	{
		cout<<names[i]<<" "<<balance[i]<<endl;
	}
	
}


