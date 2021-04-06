/*
	ID: theredh1
	LANG: C++
	PROG: angry
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
ll initX, initY, destX, destY, n;
string s;
const int SZ=1e5+1;
pair<int,int> pre[SZ];
ll giveDist(ll a, ll b)
{
	return a*a+b*b;
}
bool check(ll D)
{
	ll dX=destX, dY=destY;
	if(D<=n)
	{
		dX-=pre[D].f;
		dY-=pre[D].s;
	}
	else
	{
		ll c=D/n, r=D%n;
		dX-=pre[n].f*c+pre[r].f;
		dY-=pre[n].s*c+pre[r].s;
	}
//	cout<<abs(dX-initX)+abs(dY-initY)<<' '<<D<<endl;
	return abs(dX-initX)+abs(dY-initY)<=D;	
}
int main() {
	//setIO("angry");
  	cin>>initX>>initY>>destX>>destY>>n>>s;
	
	ll small=0, big=1e18;
	pre[0]=mp(0,0);
	for(int j=0; j<n; j++)
	{
		if(s[j]=='U')
		pre[j+1]=mp(pre[j].f, pre[j].s+1);
		if(s[j]=='D')
		pre[j+1]=mp(pre[j].first, pre[j].s-1);
		if(s[j]=='L')
		pre[j+1]=mp(pre[j].f-1, pre[j].s);
		if(s[j]=='R')
		pre[j+1]=mp(pre[j].f+1, pre[j].s);
		
		//cout<<pre[j+1].f<<' '<<pre[j+1].s<<endl;	
	}
	while(small<big)
	{
		ll D=small+(big-small)/2;
		if(check(D))
			big=D;
		else 
		small=D+1;
		
	//	cout<<small<<' '<<big<<endl;
	}
	if(check(small))
	cout<<small<<endl;
	else
	cout<<-1<<endl;
}

