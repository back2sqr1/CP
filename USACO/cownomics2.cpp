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
void show(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}
void showrev(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[v.size()-i-1]<<" ";
    cout<<"\n";
}
void showarr(ll arr[],ll n)
{
    for(ll i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
struct Rect{
	int x1,y1,x2,y2;
	int area()
	{
		return (x2-x1)*(y2-y1);
	}
};
string s[500],p[500];
int S[500][50],P[500][50], A[64];
int n, m;
bool test(int j1, int j2, int j3)
{
  bool good = true;
  for (int i=0; i<n; i++) 
    A[S[i][j1]*16 + S[i][j2]*4 + S[i][j3]] = 1;
  for (int i=0; i<n; i++) 
    if (A[P[i][j1]*16 + P[i][j2]*4 + P[i][j3]]) good = false;
  for (int i=0; i<n; i++) 
    A[S[i][j1]*16 + S[i][j2]*4 + S[i][j3]] = 0;
  return good;
}
int main() {
   	setIO("cownomics");
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
    	cin>>s[i];
    	for(int j=0; j<m; j++)
    	{
    		if (s[i][j]=='A') S[i][j] = 0;
       		if (s[i][j]=='C') S[i][j] = 1;
       		if (s[i][j]=='G') S[i][j] = 2;
      		if (s[i][j]=='T') S[i][j] = 3;
		}
	}
	for(int i=0; i<n; i++)
	{
		cin>>p[i];
		for(int j=0; j<m; j++)
    	{
    		if (p[i][j]=='A') P[i][j] = 0;
       		if (p[i][j]=='C') P[i][j] = 1;
       		if (p[i][j]=='G') P[i][j] = 2;
      		if (p[i][j]=='T') P[i][j] = 3;
		}
	}
	int ans=0;
	for(int i=0; i<m; i++)
	for(int j=i+1; j<m; j++)
	for(int k=j+1; k<m; k++)
	{
		if(test(i,j,k))
		ans++;
	}
	cout<<ans<<endl;
}

