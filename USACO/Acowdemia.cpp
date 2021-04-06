#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
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
int h(vll c)
{
	int ans=0;
	for(int i=0; i<c.size(); i++)
	{
		if(c[i]<=c.size()-i)
		ans=c[i];
		else
		break;
	}
	if(ans==0)
	return c.size();
	
	return ans;
}
int main() {
    FIO;
    ll n, k, l; cin>>n>>k>>l;
    vll c(n); trav(x, c){
    	cin>>x;
	}
	sort(all(c));
	int ac=h(c);
	//cout<<ac<<endl;
	for(int i=ac+1; i<=n; i++){
		int ct=0, j=n-1;
		for(j=n-1; c[j]>=i && j>0; j--)
			ct++;
		
		int t=i-ct;
		int cost=0;
		for(; t>0 && j<n; j--)
		{
			t--;
			cost+=(i-c[j]);
		}
		if(cost>k*l || ct+k<i)
		{
			cout<<i-1<<endl;
			break;
		}
	}
}



