#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007LL
#define mod 998244353
 
vi fact(1005,1);
 
ll binpow(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b%2)ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return ans;
}
 
ll inv(ll n)
{
    return binpow(n,MOD-2);
}
 
ll nCr(ll n,ll r)
{
    if(n==r or r==0)return 1;
    ll num=fact[n];
    ll denm=(fact[r]*fact[n-r])%MOD;
    num = (num*inv(denm))%MOD;
    return num;
}
 
int main()
{
    FIO;
    for(ll i=1;i<1005;i++)fact[i]=(i*fact[i-1])%MOD;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,a,ans=1;
        cin>>n>>k;
        map<ll,ll> mp,m;vi v;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);mp[a]++;
        }
        sort(v.rbegin(),v.rend());
        for(ll i=0;i<k;i++)m[v[i]]++;
        for(auto it:m)
        {
            ans=(ans*nCr(mp[it.F],it.S))%MOD;
        }
        cout<<ans<<endl;
    }
}
