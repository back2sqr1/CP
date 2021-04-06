/*
ID: theredh1
PROG: namenum
LANG: C++
*/
#define pb push_back
#define PB pop_back
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
map<char, char> mp;
int main() {
  mp['A'] = mp['B'] = mp['C'] = '2';
  mp['D'] = mp['E'] = mp['F'] = '3';
  mp['G'] = mp['H'] = mp['I'] = '4';
  mp['J'] = mp['K'] = mp['L'] = '5';
  mp['M'] = mp['N'] = mp['O'] = '6';
  mp['P'] = mp['R'] = mp['S'] = '7';
  mp['T'] = mp['U'] = mp['V'] = '8';
  mp['W'] = mp['X'] = mp['Y'] = '9';
	freopen("namenum.in", "r", stdin);
	freopen("namenum.out", "w", stdout);
	string dig;
	cin>>dig;
	string names;
	bool notName=false;
	bool hasOne=false;
	ifstream dictin("dict.txt");
	while(dictin>>names)
	{
		if(names.length()!=dig.length())
		continue;
		for(int i=0; i<dig.length(); i++)
		{
			if(mp[names[i]]!=dig[i])
			{
				notName=true;
				break;
			}
		}
		if(!notName)
		{
			cout<<names<<endl;
			hasOne=true;
		}
		notName=false;
	}
	if(!hasOne)
	cout<<"NONE"<<endl;
}
