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
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define pb push_back
int main() {
    //setIO("paintbarn");
    ll n;
	cin>>n;
	int xs[n], ys[n];
	memset(xs, 0, n);
	memset(ys, 0, n);
	char dir[n];
	F0R(i, n){
		cin>>dir[i]>>xs[i]>>ys[i];
	}
	vector<int> ans(n, INT_MAX);	
	vector<int> v;
	F0R(j, n)
	{
		FOR(k, j+1, n)
		{
			v.pb(abs(xs[k]-xs[j]));
			v.pb(abs(ys[k]-ys[j]));
		}
	}
	sort(all(v));
	for(int d: v)
	{
		F0R(j, n)
		{
			F0R(k, n)
			{
				if(dir[j]=='E' && dir[k]=='N' && xs[j]<xs[k]&&ys[k]<ys[j])
				{
					if(xs[j]+d==xs[k] && ys[k]+min(ans[k], d)>ys[j])
					ans[j]=min(ans[j], d);
					else if(ys[k]+d==ys[j]&& xs[j] +min(ans[j], d)>xs[k])
					ans[k]=min(ans[k], d);
				}
			}
		}
	}
	F0R(j, n)
	cout<<(ans[j]==INT_MAX? "Infinity": to_string(ans[j]))<<endl;
	
}



