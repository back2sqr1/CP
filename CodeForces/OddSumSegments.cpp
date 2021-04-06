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
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
ll n;
const int SZ=1e5+1;
bool used[SZ];
void bfs()
{
	
}
void dfs(int node)
{
	
}
void check()
{
	
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vi v(n);
        ll odds=0, evens=0;
        for(auto &x: v) {
        	cin>>x;
        	if(x%2==1)
        		odds++;
		}
        if(odds<k || odds%2!=k%2)
        	cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			for(int i=0; i<n && k>1; i++)
			{
				if(v[i]%2==1)
				{
					cout<<i+1<<' ';
					k--;
				}
			}
			cout<<n<<endl;
		}
    }
}


