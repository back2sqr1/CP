#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
//  9/7/2020
typedef long long ll;
using namespace std;
int main() {
	int t;
	cin>>t;
	int j=1;
	while(j<=t)
	{
		ll n, largest=0, ctr=0;
		cin>>n;
		vector<int> H;
		priority_queue <int, vector<int>, greater<int>> gquiz; 
		while(n--)
		{
			ll num;
			cin>>num;
			gquiz.push(num);
			if(gquiz.top()<largest+1)
			gquiz.pop();
			if(gquiz.size()>=largest+1)
			largest++;
			H.pb(largest);
		}
		cout<<"Case #"+to_string(j)+":";
		for(int i=0; i<H.size(); i++)
		{
			cout<<" "<<H[i];
		}
		cout<<endl;
		j++;
	}
}


