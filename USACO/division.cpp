/*
	ID: theredh1
	LANG: C++
	PROG: milk2
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#define vi vector<int>
#define vii vector<pair<int,int>>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
	//freopen("milk2.in", "r", stdin);
//	freopen("milk2.out", "w", stdout);
	ll n;
	cin>>n;
	vii times;
	ll lowest, longest, breaks, end;
	for(int i=0; i<n; i++)
	{
		ll x,y;
		cin>>x>>y;
		times.pb(MP(x,y));	
	}
	sort(times.begin(), times.end());
	lowest=0;
	longest = times[0].second - times[0].first;
	breaks = 0; 
	end = times[lowest].second;
	for(int i=1; i<times.size(); i++)
	{
		if (times[i].f <= end)
			end = fmax(times[i].s, end);
		else
		{
			if (times[i].f - end > breaks)
				breaks = times[i].f - end;

			if (end - times[lowest].f > longest)
				longest = end - times[lowest].f;
			lowest = i;
			end = times[lowest].s;
		}
	}
	
	cout<<longest<<' '<<breaks<<endl;
	
}


