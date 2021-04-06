/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
ll n;
vector<int> v;
bool good(ll i, ll R)
{
	
	int t=1e9, prev=i, r=R;
	while(t!=0 && r!=0)
	{		
		auto x=lower_bound(all(v),prev-r);
		t=x-v.begin();
//		cout<<t<<' ';
		if(prev==v[t])
		break;
		
		prev=v[t];
		r-=2;
	}
//	cout<<" p1"<<endl;
	return t==0;
}
bool good2(ll i, ll R)
{
	int j=1e9;
	int prev=i, r=R;
	while(j!=n-1 || r!=0)
	{
		auto y=upper_bound(all(v),prev+r);
		j=y-v.begin()-1;
//		cout<<j<<' ';
		if(prev==v[j])
		break;
		
		prev=v[j];
		r-=2;
	}
//	cout<<"p2"<<endl;
	return j==n-1;
}
int main() {
	//setIO("angry");
	cin>>n;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		a*=2;
		v.pb(a);
	}
	sort(all(v));
	ll max=1e9, min=0;
	while(max!=min)
	{
		ll l=v[0], r=v[n-1];
		ll mid=(min+max)/2;
		while(l<r)
		{
			ll m=(l+r+1)/2;
			if(good(m, mid))
			{
				l=m;
			}
			else
			r=m-1;
		}
		if(good2(l, mid))
		{
			max=mid;
		}
		else
		min=mid+1;
	}
	double ans=min/2.0;
	printf("%.1f", ans);
}

