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
bool cmp(const pair<int,int> &p1, const pair<int,int> &p2)
{
	if(p1.f==p2.f)
	return p1.s<p2.s;
	
	return p1.f<p2.f;
}
int main() {
	setIO("lifeguards");
	ll n;
	cin>>n;
	if(n==1)
	{
		cout<<0<<endl;
		return 0;
	}
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++)
	{
		ll n1, n2;
		cin>>n1>>n2;
		v.pb(mp(n1, n2));
	}
	sort(all(v), cmp);
	ll total=0, min=INT_MAX, curr=0;
	pair<int, int> c=v[0];
	for(int i=1; i<n; i++)
	{
		if(c.s>v[i].f)
		{
			c.s=fmax(c.s, v[i].s);
		}
		else
		{
			total+=c.s-c.f;
			c=v[i];
		}
	}
	total+=c.s-c.f;
	curr=v[0].s;
	min=fmin(abs(v[1].f-v[0].f), abs(v[0].s-v[0].f));
//	cout<<min<<endl;
	for(int i=1; i<n-1; i++){
		ll time;
		if(v[i-1].s>v[i+1].f)
		{
			cout<<total<<endl;
			return 0;
		}
		if(v[i+1].f-v[i].f<=v[i].s-v[i].f)
		{
			time=fmin(abs(v[i+1].f-curr), abs(v[i+1].f-v[i].f));
		}
		else
		{
			time=fmin(abs(v[i].s-curr), abs(v[i].s-v[i].f));
		}
		min=fmin(time, min);
		curr=fmax(v[i].s, curr);
	//	cout<<time<<endl;
	}
	ll t=fmin(abs(v[n-1].s-curr), abs(v[n-1].s-v[n-1].f));
//	cout<<t<<endl;
	min=fmin(t, min);
	min=fmax(min, 0);
//	cout<<total<<' '<<min<<endl;
	cout<<total-min<<endl;
}

