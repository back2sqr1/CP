#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
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

int main() {
    FIO;
    int n;
    cin>>n;
    vi a[2];
    for(int i=0; i<n; i++)
    {
    	int x; cin>>x;
    	a[x%2].pb(i+1);
	}
	if(a[0].size()==1)
	{
		cout<<a[0][0]<<endl;
	}
	else
	cout<<a[1][0]<<endl;

    
}


