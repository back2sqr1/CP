/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

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
const ll MOD= 1e9+7;
const int SZ=1e5+1;
ll n;
vector<int> cows;
void shuf(vector<int> v)
{
	for(int i=0; i<n; i++)
	{
		cows[i]=0;
		cows[v[i]-1]=i;
	}
}
int check()
{
	set<int> s;
	for(int i=0; i<n; i++)
	if(cows[i]!=0)
	s.insert(cows[i]);
	
//	for(int i=0;i<n; i++)
//	cout<<cows[i]<<' ';
//	cout<<endl;
	return s.size();
}
int main() {
	setIO("shuffle");
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		v.pb(a);
		cows.pb(i+1);
	}	
	shuf(v);
	int a=check(), b=0;
	while(a!=b)
	{
		b=a;
		shuf(v);
		a=check();
	}
	cout<<a<<endl;
}

