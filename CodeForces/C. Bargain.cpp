#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef long long ll; 
typedef vector<ll> vll;
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
#define ll long long
#define N 100003
int M=1e9+7;
string s; int n;
ll tens[N], sumTens[N], pre[N], suf[N], preSum[N], sufSum[N];

ll mulMod(ll a, ll b) {
    a *= b;
    a %= M;
    return a;
}
ll addMod(ll a, ll b) {
    long long c = (a + b) % M;
    return c;
}
void readArray(int *nums, int n) {
    for(int i=0; i<n; i++) cin>>nums[i];
}
void printArray(int *nums, int n) {
    for(int i=0; i<n; i++) cout<<nums[i]<<" ";
    cout<<endl;
}

int main() {
    cin>>s;  n = s.length();
    if(n == 1) {
        cout<<0<<endl;
        return 0;
    }
    if(n == 2) {
        cout<<(s[0] - '0') + (s[1] - '0')<<endl;
        return 0;
    }
    //set sumTens
    tens[0]=1;
    sumTens[0]=0;
	for(int i=1; i<N; i++)
	{
		tens[i]=mulMod(tens[i-1], 10);
		sumTens[i]=addMod(sumTens[i-1], tens[i]);
	}
	pre[0]=(s[0]-'0');
	suf[n-1]=(s[n-1]-'0');
	preSum[0]=pre[0];
	sufSum[n-1]=suf[n-1];
	for(int i=1; i<n; i++)
	{
		pre[i]=addMod((s[i]-'0'), mulMod(pre[i-1], 10));
		preSum[i]=addMod(preSum[i-1], pre[i]);
	}
	ll p=10;
	 for(int i=n-2; i>=0; i--) {
        suf[i] = addMod(mulMod((s[i] - '0'), p), suf[i + 1]);
        sufSum[i] = addMod(sufSum[i + 1], suf[i]);
        p = mulMod(p, 10);
    } 
	ll ans=0;
	
	ans=addMod(ans, sufSum[1]);
	ans=addMod(ans, preSum[n-2]); // last index
	for(int i=1; i<n-1; i++)
	{
		ll t= mulMod(pre[i-1], sumTens[n-i-1]);
		t=addMod(t, sufSum[i+1]);
		ans=addMod(ans, t);
	}
	cout<<ans<<endl;
    return 0;
}


