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
	char f, k, x;
	string a, b, c;
	cin>>f>>a>>k>>b>>x>>c;
	if(a=="?")
	{
		double z=stod(b), y=stod(c);
		cout<<"F ";
		z*=y;
		z*=-1;
		cout<<fixed<<setprecision(2)<<z<<endl;
	}
	else if(b=="?")
	{
		double y=stod(a), z=stod(c);
		cout<<"K ";
		y*=-1;
		y/=z;
		cout<<fixed<<setprecision(2)<<y<<endl;
	}
	else if(c=="?")
	{
		double y=stod(a), z=stod(b);
		cout<<"X ";
		y*=-1;
		y/=z;
		cout<<fixed<<setprecision(2)<<y<<endl;
	}
}


