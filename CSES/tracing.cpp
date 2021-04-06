/*
	ID: theredh1
	LANG: C++
	PROG: citystate
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
#define all(x) (x).begin(), (x).end()
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
ll n, t;
string s;
vector<pair<int,pair<int,int>>> v;
bool sim(int in, int k)
{
	bool infected[101]={false};
	int amtK[101]={0};
	infected[in]=1;
	for(int i=0; i<t; i++)
	{
		int x=v[i].s.f, y=v[i].s.s;
		if(infected[x]) amtK[x]++;
		if(infected[y]) amtK[y]++;
		if(amtK[x]<=k && infected[x]) infected[y]=true;
		if(amtK[y]<=k && infected[y]) infected[x]=true;
	}
//	for(int i=0; i<n; i++)
//	cout<<infected[i];
//	cout<<' '<<s<<endl;
	for(int i=0; i<n; i++)
	{
		if((infected[i] && s[i]=='0') || (!infected[i] && s[i]=='1'))
		return false;
	}
	return true;
}
int main() {
   setIO("tracing");
    //brute force the shit out of this one
    cin>>n>>t>>s;
    for(int i=0; i<t; i++)
    {
    	ll a, b, c;
    	cin>>a>>b>>c;
    	b--;
    	c--;
    	v.pb(mp(a, mp(b, c)));
	}
	sort(all(v));
	ll a1, a2, a3;
	a1=a3=0;
	a2=INT_MAX;
	for(int i=0; i<n; i++)
	{
		bool good=0;
		for(int j=0; j<=t+1; j++)
		{
			if(sim(i, j))
			{
				a2=fmin(a2, j);
				a3=fmax(a3, j);
				good=1;
			}
		}
		if(good)
		a1++;
	}
	cout<<a1<<' '<<a2<<' '<<(a3>t? "Infinity": to_string(a3))<<endl;
}

