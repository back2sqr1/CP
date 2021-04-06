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
bool check(pair<pair<int,int>,int> a, pair<pair<int,int>, int> b)
{
	if(a.s==0)
	{
		return a.f.s<=b.f.s;
	}
	if(a.s==2)
	{
		return a.f.s>=b.f.s;
	}
	if(a.s==1)
	{
		return a.f.f<=b.f.f;
	}
	if(a.s==3)
	{
		return a.f.f>=b.f.f;
	}
	
	return true;
}
bool cmpN(const pair<pair<int,int>, int> &a, const pair<pair<int,int>, int> &b)
{
	return a.f.f<b.f.f;
}
bool cmpE(const pair<pair<int,int>, int> &a, const pair<pair<int,int>, int> &b)
{
	return a.f.s<b.f.s;
}
vector<pair<pair<int,int>, int>> v[2], g;
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
    	if(a=='E')
    	dir=1;
    	
    	v[dir].pb(mp(mp(b, c), i));
	}
	sort(all(v[0]), cmpN);
	sort(all(v[1]), cmpE);
	vector<int> ans(n, -1);
//	for(int i=0; i<v[0].size(); i++)
//	{
//		cout<<v[0][i].f.f<<' '<<v[0][i].f.s<<endl;
//	}
//	cout<<endl;
//	for(int i=0; i<v[1].size(); i++)
//	{
//		cout<<v[1][i].f.f<<' '<<v[1][i].f.s<<endl;
//	}
//	cout<<endl;
	ll bl[n];
	memset(bl, -1, n);
	for(int i=0; i<v[0].size(); i++)
	{
		for(int j=0; j<v[1].size(); j++)
		{
			pair<pair<int,int>, int>a=v[0][i], b=v[1][j];
			if(b.f.s<a.f.s || (bl[b.s]!=-1 && bl[b.s]<j) || a.f.f<b.first.f)
			{
				continue;
			}
			ll difX=abs(a.first.f-b.first.f), difY=abs(a.first.s-b.first.s);
		//	cout<<difX<<' '<<difY<<endl;
			if(difY>difX)
			{
				ans[a.s]=difY;
				bl[a.s]=j;
				break;
			}
		}
	//	cout<<endl;
	}
	for(int i=0; i<v[1].size(); i++)
	{
		for(int j=0; j<v[0].size(); j++)
		{
			pair<pair<int,int>, int>a=v[1][i], b=v[0][j];
			if(b.f.f<a.f.f ||(bl[b.s]!=-1 && bl[b.s]<j) || a.f.s<b.f.s)
			{
				continue;
			}
			ll difX=abs(a.first.f-b.first.f), difY=abs(a.first.s-b.first.s);
		//	cout<<difX<<' '<<difY<<endl;
			if(difY<difX)
			{
				ans[a.s]=difX;
				bl[a.s]=j;
				break;
			}
		}
//		cout<<endl;
	}
	for(int i=0; i<v[0].size()-1; i++)
	{
		if(v[0][i].f.f==v[0][i+1].f.f)
		{
			if(v[0][i].f.s<v[0][i+1].f.s)
			{
				ans[v[0][i].s]=abs(v[0][i+1].f.s-v[0][i].f.s);
			}
			else
			{
				ans[v[0][i+1].s]=abs(v[0][i+1].f.s-v[0][i].f.s);
			}
		}
	}
	for(int i=0; i<v[1].size()-1; i++)
	{
		if(v[1][i].f.s==v[1][i+1].f.s)
		{
			if(v[1][i].f.f<v[1][i+1].f.f)
			{
				ans[v[1][i].s]=abs(v[1][i+1].f.f-v[1][i].f.f);
			}
			else
			{
				ans[v[1][i+1].s]=abs(v[1][i+1].f.f-v[1][i].f.f);
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		if(ans[i]==-1)
		cout<<"Infinity"<<endl;
		else
		cout<<ans[i]<<endl;
	}
}
