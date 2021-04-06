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
bool cmp(const pair<int,int>&x, const pair<int,int>&y)
{
	if(x.s==y.s)
	return x.f<y.f;
	
	return x.s<y.s;
}
bool cmp2(const pair<int,int>&x, const pair<int,int>&y)
{
	if(x.f==y.f)
	return x.s<y.s;
	
	return x.f<y.f;
}
ll n;
ll area(vector<pair<int,int>> v, ll gap)
{
	ll maxA=INT_MIN, minA=INT_MAX, maxB=INT_MIN, minB=INT_MAX, ans=0;
	for(int i=0; i<=gap; i++)
	{
		maxA=fmax(v[i].f, maxA);
		minA=fmin(v[i].f, minA);
		maxB=fmax(v[i].s, maxB);
		minB=fmin(v[i].s, minB);
	}
	ans+=fmax(maxA-minA,1)*fmax(maxB-minB,1);
//	cout<<maxA<<' '<<minA<<' '<<maxB<<' '<<minB<<' '<<ans<<endl;
	maxA=INT_MIN, minA=INT_MAX, maxB=INT_MIN, minB=INT_MAX;
	for(int i=gap+1; i<n; i++)
	{
		maxA=fmax(v[i].f, maxA);
		minA=fmin(v[i].f, minA);
		maxB=fmax(v[i].s, maxB);
		minB=fmin(v[i].s, minB);
	}
	ans+=fmax(maxA-minA,1)*fmax(maxB-minB,1);
//	cout<<maxA<<' '<<minA<<' '<<maxB<<' '<<minB<<' '<<ans<<endl;
	return ans;
}
int main() {
 	setIO("split");
	cin>>n;
	vector<pair<int,int>> v, v2;
	for(int i=0; i<n; i++)
	{
		ll a, b;
		cin>>a>>b;
		v.pb(mp(a, b));
		v2.pb(mp(a, b));
	}
	ll total=area(v, -1)-1;
	sort(all(v), cmp2);
	sort(all(v2), cmp);
	ll gapSize1=0, gap1=0, gapSize2=0, gap2=0;
	vector<int> g1, g2;
	for(int i=0; i<n-1; i++)
	{
		if(abs(v[i].f-v[i+1].f)>=gapSize1)
		{
			gapSize1=abs(v[i].f-v[i+1].f);
			g1.pb(i);
		}
		if(abs(v2[i].s-v2[i+1].s)>=gapSize2)
		{
			gapSize2=abs(v2[i].s-v2[i+1].s);
			g2.pb(i);
		}
	}
	
	ll ans=fmax(total-area(v, g1[g1.size()-1]), total-area(v2, g2[g2.size()-1]));
	//cout<<total<<' '<<ans<<endl;
	cout<<fmax(ans, 1)<<endl;
}

