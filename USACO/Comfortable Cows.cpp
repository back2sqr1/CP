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
vpi v, dir;
bool cmp(const pair<int,int>& x, const pair<int,int>& y) { if(x.f==y.f) return x.s<y.s;  return x.f<y.f;}
int main() {
   FIO;
   ll n; cin>>n;
   int arr[500][500]={0};
   bool check[500][500]={0};
   int on=0;
   for(int i=0; i<n; i++)
   {
   		int a, b; cin>>a>>b;
   		a+=2;
   		b+=2;
	   	check[a][b]=1;
	   	if(i<3)
	   	{
	   		cout<<0<<endl;
			continue;	
		}
		arr[a][b-1]++;
		if(arr[a][b-1]==3)
		on++;
		else if(arr[a][b-1]==4)
		on--;
		arr[a][b+1]++;
		if(arr[a][b+1]==3)
		on++;
		else if(arr[a][b+1]==4)
		on--;
		arr[a+1][b]++;
		if(arr[a+1][b]==3)
		on++;
		else if(arr[a+1][b]==4)
		on--;
		arr[a-1][b]++;
		if(arr[a-1][b]==3)
		on++;
		else if(arr[a-1][b]==4)
		on--;
		cout<<on<<endl;
   }
   
}


