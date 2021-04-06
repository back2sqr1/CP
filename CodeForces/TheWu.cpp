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
int main() {
	//setIO("split");
	int n, m ,q;
	cin>>n>>m>>q;
	const int N=32;
	vector<int> w;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		w.pb(a);
	}
	vector<string> S;
	for(int i=0; i<m; i++)
	{
		string s;
		cin>>s;
		S.pb(s);
	}
	for(int i=0; i<q; i++)
	{
		string pp;
		cin>>pp;
		int check, out=0;
		cin>>check;
		bitset<N> t(pp);
		for(int i=0; i<m; i++)
		{
			bitset<N> bset(string(S[i])); 
			bitset<N> a=t^bset;
			int Wu=0;
			for(int j=0; j<n; j++)
			{
				if(a[n-j-1]==0)
				Wu+=w[j];
			}
			if(Wu<=check)
			out++;
		}
		cout<<out<<endl;
	}
	
}

