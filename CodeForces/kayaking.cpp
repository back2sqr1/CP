#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define debug(x) cerr<<#x<<" "<<x<<endl;
#define f(i,n) for(ll i=0; i<n; i++)
#define f1(i,n) for(ll i=1; i<=n; i++)
#define fr(i,n) for(ll i=n-1; i>=0; i--)
#define f1r(i,n) for(ll i=n; i>0; i--)
#define mst(arr,val) memset(arr,val,sizeof(arr))
#define all(x) x.begin(),x.end()

typedef long long int ll;
typedef pair<ll,ll> pii;
ll M=1e9+7;
ll M2=998244353;
ll M3 = 1e8;
ll MAX = 5001;
string s = "Everything correct till here!";

void show(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}
void showrev(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[v.size()-i-1]<<" ";
    cout<<"\n";
}
void showarr(ll arr[],ll n)
{
    for(ll i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
void showpv(vector<pair<ll,ll> > v)
{
    f(i,v.size())
    cout<<v[i].ff<<" "<<v[i].ss<<"\n";
}
void solve()
{
    ll n; cin>>n;
    n *= 2;
    ll a[n]; f(i,n) cin>>a[i];
    sort(a,a+n);
    ll ans = INT_MAX;
    for(ll i=0; i<n; i+=2){
        for(ll j=i+1; j<n; j += 2){
            ll temp = 0;
            for(int ii=0; ii<n; ii +=2){
                if(ii == i or  ii == j)
                {
                    ii--;
                    continue;
                }
                temp += a[ii+1] - a[ii];
            }
            ans = min(ans, temp);
            //cout<<temp<<"\n";
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    IOS
    ll T = 1,Q=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}

