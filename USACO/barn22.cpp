/*
	ID: theredh1
	LANG: C++
	PROG: barn1
*/
#define pb push_back
#define PB pop_back
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
	
	freopen("barn1.in", "r", stdin);
	freopen("barn1.out", "w", stdout);
	ll m,s,c;
	cin>>m>>s>>c;
	int stalls[c];
	for(int i=0; i<c; i++)
	{
		cin>>stalls[i];
	}
	sort(stalls, stalls+c);
	int gaps=0;
	vector<int> gapsV;
	int board=c;
//	cout<<stalls[0]<<endl;
	for(int i=1; i<c; i++)
	{
		if(stalls[i]-stalls[i-1]!=1)
		{
			gaps++;
			gapsV.pb(stalls[i]-stalls[i-1]);
		}	
//		cout<<stalls[i]<<endl;
	}
	if(gaps<=m-1)
	{
		cout<<c<<endl;
		return 0;
	}
	sort(gapsV.begin(), gapsV.end());
	int i=0;
//	cout<<gaps<<endl;
	while(gaps!=m-1)
	{
		board+=gapsV[i]-1;
		
		i++;
		gaps--;
	}
	cout<<board<<endl;
}


