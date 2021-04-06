#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef long long ll; 
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define F1R(i,a) FOR(i,1,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define pb push_back
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
int main() {
    FIO;
 	int n; cin>>n;
	int a[n][n];
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
	{
		cin>>a[i][j];	
	}   
	int h=0;
	for(int i=0; i<n; i++)
	{
		int sum[2];
		sum[0]=0;
		sum[1]=0;
		for(int j=0; j<n; j++)
		{
			sum[j%2]+=a[i][j];
		}
		h+=max(sum[0],sum[1]);
	}
	
	int v=0;
	for(int j=0; j<n; j++)
	{
		int sum[2];
		sum[0]=0;
		sum[1]=0;
		for(int i=0; i<n; i++)
		{
			sum[i%2]+=a[i][j];
		}
		v+=max(sum[0],sum[1]);
	}
	cout<<max(v,h)<<endl;
}


