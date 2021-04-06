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
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
ll MOD=1e9+7;
bool cmp (const pair<int,int> & a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
bool cmp2(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.s==b.s)
	return a.f<b.f;
	
	return a.s<b.s;
}
const int SZ=1e5+1;
int main() {
  //setIO("triangles");
   	ll n;
   	cin>>n;
   	vector<pair<ll,ll>> points, byX, byY;
   	for(int i=0; i<n; i++)
   	{
   		ll a, b;
   		cin>>a>>b;
   		//points.pb(mp(a, b));
   		byX.pb(mp(a, b));
   		byY.pb(mp(a, b));
	}
	//sort(all(points), cmp);
	ll ans=0;
	
	cout<<ans%MOD<<endl;
//	for(int a=0; a<n; a++)
//	{
//		for(int b=a+1; b<n; b++)
//		{
//			for(int c=b+1; c<n; c++)
//			{
//				if(points[a].f==points[b].f)
//				{
//					if(points[a].s==points[c].s){
//						ans+=(abs(points[a].s-points[b].s) * abs(points[a].f-points[c].f))%MOD; // 1
//					}
//					if(points[b].s==points[c].s)
//					{
//						ans+=(abs(points[a].s-points[b].s) * abs(points[b].f-points[c].f))%MOD;// 2
//					}
//				}
//				if(points[b].f==points[c].f)
//				{
//					if(points[b].s==points[a].s)
//					ans+=(abs(points[a].f-points[b].f) * abs(points[b].s-points[c].s))%MOD; //3
//					if(points[a].s==points[c].s)
//					ans+=(abs(points[a].f-points[c].f) * abs(points[b].s-points[c].s))%MOD; //4
//					
//				}
//				cout<<points[a].f<<' '<<points[a].s<<' '<<points[b].f<<' '<<points[b].s<<' '<<points[c].f<<' '<<points[c].s<<endl;
//			}
//			//cout<<endl;
//		}
//	}
}

