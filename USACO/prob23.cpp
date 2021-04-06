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
bool cmp(const pair<int,int>& x, const pair<int,int>& y) { if(x.f==y.f) return x.s<y.s;  return x.f<y.f;}
void solve()
{
	
}
int main() {
   int n;
   cin>>n;
   vi v;
   int mx=0;
   for(int i=0; i<n; i++)
   {
   		int x; cin>>x;
   		//cout<<x<<endl;
		v.pb(x);
		mx=max(x, mx);
   }
   for(int j=0;j<n; j++)
   {
   		int h=v[j], l=mx-ceil((double)v[j]/2)+1;
   		for(int i=0; i<l; i++)
   		cout<<" ";
   		for(int i=0; i<v[j]; i++)
   		cout<<"#";
   		cout<<endl;
   		
   		int c=0, a=0;
   		for(; c<v[j]/2; c++)
   		{
   			for(int i=0; i<l-c-1; i++)
   			cout<<" ";
   			cout<<"#";
   			for(int i=0; i<v[j]+a; i++)
   			{
   				cout<<" ";	
			}
			cout<<"#"<<endl;
			a+=2;
		}
   		for(; c>=0; --c)
   		{
   			for(int i=0; i<l-c-1; i++)
   			cout<<" ";
   			cout<<"#";
   			for(int i=0; i<v[j]+a; i++)
   			{
   				cout<<" ";	
			}
			cout<<"#"<<endl;
			a-=2;
		}
   		
		for(int i=0; i<l; i++)
   		cout<<" ";
   		for(int i=0; i<v[j]; i++)
   		cout<<"#";
   		cout<<endl;
   }
}


