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
ll check(deque<int> d, int nums)
{
	ll index=0, a=0;
	for(auto x: d)
	{
		if(index==nums/2)
		break;
		
		a+=x;
		index++;
	}
	return a;
} 
void showdq(deque <int> g) 
{ 
    deque <int> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
int main() {
//	setIO("berries");
	ll n, k;
	cin>>n>>k;
	vector<ll> b;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		b.pb(a);
	}
	sort(all(b), greater<int>());
	deque<int> d;
	for(int i=0; i<fmin(k, n); i++)
	{
		d.push_front(b[i]);	
	}
	if(k>n)
	{
		for(int i=0; i<k-n; i++)
		{
			ll a= d.back();
			d.pop_back();
			d.push_back(a/2);
			d.push_back(a-a/2);
			sort(all(d));
		}
	}
	ll ans=0;
	for(int i=0; i<k; i++)
	{
		ans=fmax(check(d, k), ans);
		cout<<check(d, k)<<endl;
		
		showdq(d);
		ll a= d.back();
		d.pop_back();
		d.pop_front();
		d.push_back(a/2);
		d.push_back(a-a/2);
		sort(all(d));
	}
	showdq(d);
	ans=fmax(check(d, k), ans);
	cout<<check(d, k)<<endl;
	cout<<ans<<endl;
}

