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
int r,c;
const int xd[4] = {0,1,0,-1}, yd[4] = {1,0,-1,0};
bool a[1002][1002]={0};
bool cmp(const pair<int,int>& x, const pair<int,int>& y) { if(x.f==y.f) return x.s<y.s;  return x.f<y.f;}
vpi endpts;
void cc(int x, int y) { // flood fill!
	int ch=0;

	ch+=a[x-1][y];
	ch+=a[x+1][y];
	ch+=a[x][y-1];
	ch+=a[x][y+1];
	if(ch>=2 && a[x][y])
		endpts.pb(mp(x,y));
}



void solve()
{
	cin>>r>>c;
	F1R(i, r+1)
	F1R(j, c+1)
	{
		cin>>a[i][j];
	}
	endpts.clear();
	F1R(i, r+1)
	F1R(j, c+1)
		cc(i,j);
	int ans=0;
	for(int i=0; i<endpts.size(); i++)
	{
		int b=endpts[i].f, c=endpts[i].s;
		int x=b, y=c,t=0;
		vi l;
		while(a[x][y])
		{
			t++; x--;
		}
			l.pb(t);
		t=0; x=b; y=c;
		while(a[x][y])
		{
			t++; x++;
		}
			l.pb(t);
		t=0; x=b; y=c;
		while(a[x][y])
		{
			t++;
			y--;
		}
			l.pb(t);
		t=0; x=b; y=c;
		while(a[x][y])
		{
			t++;
			y++;
		}
			l.pb(t);
		//cout<<b<<' '<<c<<' '<<l[0]<<' '<<l[1]<<' '<<l[2]<<' '<<l[3]<<' ';
		int total=0;
		for(int j=0; j<2; j++)
			for(int k=2; k<l.size(); k++)
			{
				int mn=min(l[j], l[k]), mx=max(l[j],l[k]);
				while(mn>1)
				{
					if(mx>=mn*2)
					{
						total+=mn-1;
						break;
					}
					mn--;
				}
				total+=max(min(l[j], l[k])/2-1,0);
			}
		ans+=total;
		//cout<<total<<endl;
	}	
	cout<<ans<<endl;

}
int main() {
	FIO;
	int t; cin>>t;
	for(int i=0; i<t; i++)
	{
		cout<<"Case #"<<i+1<<": ";
		solve();
	}
	
}


