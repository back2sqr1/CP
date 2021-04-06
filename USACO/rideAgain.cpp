/*
	ID: theredh1
	LANG: C++
	TASK: gift1
*/
#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))
using namespace std;
void exchange(map<string, int> names, string personX, string personY, int amt)
{
  names.at(personX)-=amt;
  names.at(personY)+=amt;
}
int main() { 
	freopen("gift1.in", "r", stdin);
	freopen("gift2.out", "w", stdout);
 	map<string, int> balances;
 	map<string, int>::iterator it=balances.begin();
 	int ppl;
 	cin>>ppl;
 	for(int i=0; i<ppl; i++)
 	{
 		string p;
 		cin>>p;
 		balances.insert(p,0);
	}
	for (it=balances.begin(); it!=balances.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';
}
