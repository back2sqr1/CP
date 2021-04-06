/*
	ID: theredh1
	LANG: C++
	PROG: angry
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

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
const int SZ = 1e5+1;
ll n;
vector<int> children[SZ];
bool vis[SZ];
ld dfs(int node) {
    vis[node]=1;
    ld s=0;
    int count=0;
    for (int child : children[node]) {
        if(!vis[child])
		{
			count++;
			s+=dfs(child)+1;
		}
    }
    if(count==0) 
    return 0;
    else
    return s/count;
    
}

int main() {
	//setIO("split");
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin>>n;
	for(int i=0; i<n-1; i++)
	{
		ll a, b;
		cin>>a>>b;
		children[a].pb(b);
		children[b].pb(a);
	}
	cout<<setprecision(9)<<dfs(1)<<endl;
}

