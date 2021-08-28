#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
void solve()
{
	int n;
	cin >> n;
	long long mx=-LLONG_MAX, sum=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		mx=max(mx,a[i]);
		sum+=a[i];
	}
	sum-=mx; //sum of everything excluding max
	double ans=mx+(double)sum/(n-1); //deleted counter section
	cout << fixed << setprecision(7) << ans << endl; //switched to 6
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	
	return 0;
}