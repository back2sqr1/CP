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
   	//setIO("pairup");
    ll a, b, c;
    cin>>a>>b>>c;
    ll m;
    cin>>m;
    vector<ll> U, P;
    for(int i=0; i<m; i++)
    {
    	ll n;
    	cin>>n;
    	string s;
    	cin>>s;
    	s=s.substr(0,1);
    	if(s=="U")
    	U.pb(n);
    	else
    	P.pb(n);
	}
	ll cost=0;
	sort(all(U));
	sort(all(P));
	int i=0, j=0, ctr1=0, ctr2=0;
	while(i<U.size() && ctr1<a)
	{
		cost+=U[i];
		ctr1++;
		i++;
	}
//	cout<<ctr1<<' '<<cost<<endl;
	while(j<P.size() && ctr2<b)
	{
		cost+=P[j];
		ctr2++;
		j++;
	}
//	cout<<ctr2<<' '<<cost<<endl;
	int ctr3=0;
	while(ctr3<c && (i<U.size()|| j<P.size()))
	{
		if(i<U.size() && j<P.size())
		{
			if(U[i]<P[j])
			{
				cost+=U[i];
				i++;
			}
			else
			{
				cost+=P[j];
				j++;
			}
			ctr3++;
		}
		else
		{
			if(j<P.size())
			{
				cost+=P[j];
				ctr3++;
				j++;
			}
			if(i<U.size())
			{
				cost+=U[i];
				ctr3++;
				i++;
			}
		}
	}
//	cout<<ctr3<<' '<<cost<<endl;
	cout<<ctr1+ctr2+ctr3<<' '<<cost<<endl;;
}

