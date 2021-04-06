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
   string a, c1, c2, c3;
   double b, x, y;
   cin>>a>>b>>c1>>c2>>c3;
   map<string, double> m; //conversion to inches, second;
   transform(c1.begin(), c1.end(), c1.begin(), ::tolower);
   transform(c3.begin(), c3.end(), c3.begin(), ::tolower);
   m["hour"]=1/3600.0;
   m["minute"]=1/60.0;
   m["second"]=1;
   m["feet"]=1/3.28;
   m["meters"]=1;
   m["kilometers"]=1000;
   m["yards"]=1/3.28*3;
   m["centimeters"]=1.0/100;
   m["inches"]=1/12*1/3.28;
   m["miles"]=5280*1/3.28;
   x=m[c1];
   y=m[c3];
   b*=y;
   b*=x;
   double height=(b*b)/(2*(9.805));
   cout<<a<<' '<<"will launch the messenger ";
   cout<<fixed<<setprecision(2)<<height;
   cout<<" meters high, ";
   if(height>50)
   cout<<"OUCH!";
   else if(height>=25)
   {
   	cout<<"SUCCESS!"<<endl;
   }
   else 
   {
   		cout<<"SPLAT!"<<endl;
   }
}


