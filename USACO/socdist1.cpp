/*
	ID: theredh1
	LANG: C++
	PROG: socdist1
*/
#include <bits/stdc++.h> // see C++ Tips & Tricks
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
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
int main() {
    //setIO("socdist1");
	string s;
	cin>>n>>s;
	vector<int> gaps;
	double g=0;
	bool infected=false;
	for(int i=0; i<n; i++)
	{
		if(s[i]=='0')
		{
			ll start=i;
			while(s[i]=='0')
			{
				i++;
				g++;
			}
			if(start==0 || i==n)
			gaps.pb(g);
			else
			gaps.pb(ceil(g/2.0));
			
			g=0;
		}
		if(s[i]=='1')
		infected=1;
	}
//	for(int i=0; i<gaps.size(); i++)
//	{
//		cout<<gaps[i]<<' ';
//	}
//	cout<<endl;
	sort(all(gaps), greater<int>());
	if(infected)
	cout<<fmax(ceil(gaps[0]/2.0), gaps[1])<<endl;
	else
	cout<<n-1LL<<endl;
}

