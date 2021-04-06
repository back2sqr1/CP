/*
	ID: theredh1
	LANG: C++
	PROG: lineup
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
#define base 7
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
ll co;
string s;
bool vis[base][base];
bool e(int i, int j)
{
	return i>=0&& i<7 &&j>=0 && j<7 && !vis[i][j];
}
void dfs(int i, int j, int a=0)
{
	//cout<<i<<' '<<j<<endl;
	if(i==6 && j==0)
	{
		if(a==48)
		++co;
		return;
	}
	vis[i][j]=1;
	if(s[a]=='?'|| s[a]=='L')
	{
		if(j && !vis[i][j-1])
		{
			if(!(!e(i,j-2) &&e(i+1, j-1) && e(i-1, j-1)))
			dfs(i, j-1, a+1);
		}
	}
	if(s[a]=='?'|| s[a]=='R')
	{
		if(j<6 && !vis[i][j+1])
		{
			if(!(!e(i,j+2) &&e(i+1, j+1) && e(i-1, j+1)))
			dfs(i, j+1, a+1);
		}
	}
	if(s[a]=='?'|| s[a]=='U')
	{
		if(i && !vis[i-1][j])
		{
			if(!(!e(i-2,j) &&e(i-1, j+1) && e(i-1, j-1)))
			dfs(i-1, j, a+1);
		}
	}
	if(s[a]=='?'|| s[a]=='D')
	{
		if(i<6 && !vis[i+1][j])
		{
			if(!(!e(i+2,j) &&e(i+1, j+1) && e(i+1, j-1)))
			dfs(i+1, j, a+1);
		}
	}
	vis[i][j]=0;
}
int main() {
	cin>>s;
	dfs(0,0);
	cout<<co<<endl;
}



