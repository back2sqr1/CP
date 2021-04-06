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
int main() {
   	setIO("pairup");
    int N;
    cin>>N;
    vector<pair<ll,ll>> v;
    for(int i=0; i<N; i++)
    {
    	int n, n2;
    	cin>>n>>n2;
    	v.pb(mp(n2, n));
	}
	sort(all(v));
	int i=0, j=N-1; 
	ll max=0;
	while(i<j)
	{
		max=fmax(v[i].f+v[j].f, max);
		int m= fmin(v[i].s, v[j].s);
		v[i].s-=m;
		v[j].s-=m;
		if(v[i].s==0)
		{
			i++;
		}
		if(v[j].s==0)
		{
			j--;
		}
	}
	cout<<max<<endl;
}

