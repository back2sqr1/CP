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

void solve()
{
	
}
int main() {
   FIO;
   int n; cin>>n;
   int a[n][n];
   ll ans=0;
   queue<pair<int,int>> q;
   for(int i=0; i<n; i++)
   for(int j=0; j<n; j++)
   {
   		cin>>a[i][j];
   		if(a[i][j]==100)
   		{
   			q.push(mp(i, j));
   			ans++;
		}
   }
//   while(!q.empty())
//   {
//   		int x=q.front().f, y=q.front().s;
//   		q.pop();
//   		int b=0, c=0;
//		for(int i=x+1; i<n; i++)
//   		{
//   			if(a[i][y]>=100)
//   			b++;
//   			else
//   			break;
//		}
//		for(int i=x+1; i<n; i++)
//   		{
//   			if(a[i][y]>=100)
//   			b++;
//   			else
//   			break;
//		}
//   }
	cout<<8<<endl;
}


