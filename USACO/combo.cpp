/*
	ID: theredh1
	LANG: C++
	PROG: combo
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define MT make_tuple
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
int main() {
//	freopen("combo.in", "r", stdin);
//	freopen("combo.out", "w", stdout);
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<1<<endl;
		return 0;
	}
	if(n==2)
	{
		cout<<8<<endl;
		return 0;
	}
	vector<tuple<int,int,int>> combos;
	int farmer1, farmer2, farmer3, master1, master2, master3;
	cin>>farmer1>>farmer2>>farmer3>>master1>>master2>>master3;
	int pos[6][5]={
		{farmer1-2, farmer1-1, farmer1, farmer1+1, farmer1+2}, {farmer2-2, farmer2-1, farmer2, farmer2+1, farmer2+2},
		{farmer3-2, farmer3-1, farmer3, farmer3+1, farmer3+2}, {master1-2, master1-1, master1, master1+1, master1+2},
		{master2-2, master2-1, master2, master2+1, master2+2}, {master3-2, master3-1, master3, master3+1, master3+2}
	};
	for(int i=0; i<6; i++)
	for(int j=0; j<5; j++)
	{
		if(pos[i][j]<=0)
		{
			pos[i][j]+=n;
		}
		if(pos[i][j]>n)
		{
			pos[i][j]-=n;
		}
	}
	for(int k=0; k<5; k++)
	for(int j=0; j<5; j++)
	for(int i=0; i<5; i++)
	{
		combos.pb(MT(pos[0][k],pos[1][j],pos[2][i]));
	}
	for(int k=0; k<5; k++)
	for(int j=0; j<5; j++)
	for(int i=0; i<5; i++)
	{
		combos.pb(MT(pos[3][k],pos[4][j],pos[5][i]));
	}
	for(int j=0; j<combos.size(); j++)
	for(int i=0; i<combos.size(); i++)
	{
		if(j!=i && combos[i]==combos[j])
		{
			combos.erase(combos.begin()+i);
		}
	}
	cout<<combos.size()<<endl;
}
