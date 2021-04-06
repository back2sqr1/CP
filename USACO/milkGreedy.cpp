/*
	ID: theredh1
	LANG: C++
	PROG: milk
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
	freopen("milk.in", "r", stdin);
	freopen("milk.out", "w", stdout);
	ll n,m,cost=0;
	cin>>n>>m;
	vector<pair<int,int>> price_amt;
	ll min=9223372036854775807;
	for(int i=0; i<m; i++)
	{
		ll P,A;
		cin>>P>>A;
		price_amt.pb(MP(P,A));
	}	
	sort(price_amt.begin(), price_amt.end());
	for(int i=0; n>0; i++)
	{
		if(price_amt[i].s>n)
		{
			price_amt[i].s=n;
		}
			n-=price_amt[i].s;
			cost+=price_amt[i].f*price_amt[i].s;
	}
	cout<<cost<<endl;
	
}


