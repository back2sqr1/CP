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
int main()
{
	setIO("reduce");
	int n;
	cin>>n;
	vector<pair<ll, ll>> c;
	ll hY=0, lY=LLONG_MAX, hX=0, lX=LLONG_MAX;
	for(int i=0; i<n; i++)
	{
		ll num1, num2;
		cin>>num1>>num2;
		hY=fmax(hY, num2);
		lY=fmin(lY, num2);
		hX=fmax(hX, num1);
		lX=fmin(lX, num1);
		c.pb(mp(num1, num2));
	}
	vector<pair<ll,ll>> v;
	for(int i=0; i<n; i++)
	{
		if(c[i].f==hX || c[i].f==lX || c[i].s==hY || c[i].s==lY)
		{
			v.pb(c[i]);
		}
	}
	ll ans=LLONG_MAX;
	for(auto x: v)
	{
		ll temp;
		 hY=0; lY=LLONG_MAX; hX=0; lX=LLONG_MAX;
		for(int i=0; i<n; i++)
		{
			if(c[i]==x)
			continue;
			
			hY=fmax(hY, c[i].s);
			lY=fmin(lY, c[i].s);
			hX=fmax(hX, c[i].f);
			lX=fmin(lX, c[i].f);
		}
		temp=abs(hY-lY)*abs(hX-lX);
//		cout<<x.f<<' '<<x.s<<endl;
//		cout<<temp<<endl;
		ans=fmin(ans, temp);
	}
	cout<<ans<<endl;
}
