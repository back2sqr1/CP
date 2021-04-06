/*
	ID: theredh1
	LANG: C++
	PROG: moobuzz
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
struct Cow{
	int w, x, d;
	Cow(int a, int b, int c)
	{
		w=a;
		x=b;
		d=c;
	}
};
vector<Cow> v;
ll n, l;
bool cmp(Cow &a, Cow &b)
{
	return a.x<b.x;
}
int main() {
    //setIO("meetings");
    cin>>n>>l;
    l*=2;
    ll total=0, curr=0;
    for(int i=0; i<n; i++)
    {
    	ll a, b, c;
    	cin>>a>>b>>c;
    	b*=2;
    	total+=a;
    	Cow cow=Cow(a, b, c);
    	v.pb(cow);
	}
	curr=total;
	sort(all(v), cmp);
	
	
}


