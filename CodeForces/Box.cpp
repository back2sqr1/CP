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
        ll n;
        cin>>n;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }       
        set<ll> s;
        for(int i = 1; i <= n; i++){
            s.insert(i);
        }
        ll p[n];
        p[0] = a[0];
        s.erase(a[0]);
        ll cur = a[0];
        bool flag = 0;
        for(int i = 1; i < n; i++){
            if(a[i] > cur){
                p[i] = a[i];
                s.erase(a[i]);
                cur = a[i];
            }else{
                if(*s.begin() > cur){
                    flag = 1;
                    break;
                }
                p[i] = *s.begin();
                s.erase(p[i]);
            }
        }
        if(flag){
            cout<<"-1"<<endl;
            continue;
        }
        for(int i = 0; i < n; i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
}


