/*
	ID: theredh1
	LANG: C++
	PROG: mowing
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

int main() {
    setIO("mowing");
  	int n,i=0;
  	cin>>n;
  	vector<pair<char,int>> mowed;  
  	map<pair<int, int>, int> map;
  	while(i<n)
  	{
  		char a;
  		int dis;
  		cin>>a>>dis;
  		mowed.pb(mp(a,dis));
  		i++;	
	}
	int X=0, Y=0, ans=INT_MAX, time=0;
	bool first=false;
	map[mp(0,0)]=0;
	for(int i=0; i<mowed.size(); i++)
	{
		if(mowed[i].f=='E')
		{
			for(int j=1; j<=mowed[i].s; j++)
			{
				if(map[mp(X+j,Y)]==0)
				map[mp(X+j,Y)]=time+j;
				else
				{
					ans=fmin(ans,abs(map[mp(X+j,Y)]-time-j));
					//cout<<map[mp(X+j,Y)]<<' '<<time+j<<' '<<ans<<endl;
					map[mp(X+j, Y)]=time+j;
				}
			}
			X+=mowed[i].s;
		}
		else if(mowed[i].f=='W')
		{
			for(int j=1; j<=mowed[i].s; j++)
			{
				if(map[mp(X-j,Y)]==0)
				map[mp(X-j,Y)]=time+j;
				else
				{
					ans=fmin(ans,abs(map[mp(X-j,Y)]-time-j));
				//cout<<map[mp(X-j,Y)]<<' '<<time+j<<' '<<ans<<endl;
					map[mp(X-j, Y)]=time+j;
				}
			}
			X-=mowed[i].s;
		}
		else if(mowed[i].f=='N')
		{
			for(int j=1; j<=mowed[i].s; j++)
			{
				if(map[mp(X,Y+j)]==0)
				map[mp(X,Y+j)]=time+j;
				else
				{
					ans=fmin(ans,abs(map[mp(X,Y+j)]-time-j));
				//	cout<<map[mp(X,Y+j)]<<' '<<time+j<<' '<<ans<<endl;
					map[mp(X, Y+j)]=time+j;
				}
			}
			Y+=mowed[i].s;
		}
		else
		{
			for(int j=1; j<=mowed[i].s; j++)
			{
				if(map[mp(X,Y-j)]==0)
				map[mp(X,Y-j)]=time+j;
				else 
				{
					ans=fmin(ans, abs(map[mp(X,Y-j)]-time-j));
				//	cout<<map[mp(X,Y-j)]<<' '<<time+j<<' '<<ans<<endl;
					map[mp(X, Y-j)]=time+j;
				}
			}
			Y-=mowed[i].s;
		}
		time+=mowed[i].s;
		
	}
	if(ans==INT_MAX)
	ans=-1;
	
	cout<<ans<<endl;
}

