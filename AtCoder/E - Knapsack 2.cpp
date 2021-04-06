#include <bits/stdc++.h>
using namespace std;
 #define vvi vector<vector<int> >
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


const int N=1e2+5;
int n,W;
int v[N],w[N],dp[N][100001];
int solve(int ind,int V){
    if(V<0)
        return inf;
    int &ans=dp[ind][V];
    if(ans!=-1)
        return ans;
    if(ind==n){
        if(V==0)
            return ans=0;
        else
            return ans=inf;
    }
    else
        return ans=min(w[ind]+solve(ind+1,V-v[ind]),solve(ind+1,V));
}
int32_t main(){__
    cin>>n>>W;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    memset(dp,-1,sizeof dp);
    for(int i=100000;i>=0;i--){
        if(solve(0,i)<=W)
            return cout<<i<<"\n",0;
    }
return 0;
}

