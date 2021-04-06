#include <bits/stdc++.h>
 
using namespace std;
 
#ifdef DEBUG
#define LOG(args) cout << args << "\n"
#define debug(x) x
#else
#define LOG(args)
#define debug(x)
#endif
 
#define vi vector<int>
#define ii pair<int, int>
#define vii vector< ii >
#define vvi vector< vi >
#define mp make_pair
#define pb push_back
#define sz(x) (int)(x.size())
#define ms(x, v) memset((x), v, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define REP(x, n) for(int x = 0; x < n; x++)
#define REPV(x, v, n) for(int x = v; x < n; x++)
#define REVE(x, n) for(int x = n; x >= 0; x--)
 
typedef long long ll;
 
int K, N;
vector<ll> A;
set<ll> B;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> K >> N;
    ll prv = 0;
    A.resize(K);
    for(auto &x : A) cin >> x, x += prv, prv = x;
    REP(i, N) cin >> prv, B.insert(prv);
 
    set<ll> ans;
    REP(i, K) ans.insert(prv - A[i]);
 
    int cnt = 0;
    for(ll a : ans)
    {
	set<ll> tmp = B;
	for(ll v : A) tmp.erase(a + v);
	if(tmp.empty()) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
