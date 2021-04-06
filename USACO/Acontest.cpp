/*
	ID: theredh1
	LANG: C++
	PROG: gymnastics
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
bool cmpN(const pair<pair<int,int>, int> &a, const pair<pair<int,int>, int> &b)
{
	a.f.f<b.f.f;
}
bool cmpS(const pair<pair<int,int>, int> &a, const pair<pair<int,int>, int> &b)
{
	a.f.f>=b.f.f;
}
bool cmpE(const pair<pair<int,int>, int> &a, const pair<pair<int,int>, int> &b)
{
	a.f.s<b.f.s;
}
bool cmpW(const pair<pair<int,int>, int> &a, const pair<pair<int,int>, int> &b)
{
	a.f.f>=b.f.f;
}
vector<pair<pair<int,int>, int>> v[4];
// N, S, E, W
int main() {
    //setIO("gymnastics");
    ll n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
    	char a;
    	int b, c, dir;
    	cin>>a>>b>>c;
    	if(a=='N')
    	dir=0;
    	if(a=='S')
    	dir=1;
    	if(a=='E')
    	dir=2;
    	if(a=='W')
    	dir=3;
    	
    	v[dir].pb(mp(mp(b, c), 1));
	}
	for(int i=0; i<n; i++)
	{
		
	}
	
}


