#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
struct Edge{
	int a, b, w;
	bool operator<(const Edge &y){
		if(w!=y.w) return w<y.w;
		return a<y.a;
	}
};
//struct c{
//	int a, b;
//	bool inter(const c &Cust)
//	{
//		return b>=Cust.a && a<=Cust.a;
//	}
//};
int main()
{
	 int n; cin >> n;
    vector<pair<int,int>> vals;
    for (int i = 0; i < n; i++) {
        int l, r; 
        cin >> l >> r;
        vals.pb(mp(l, 1));
        vals.pb(mp(r, -1));
    }

    sort(all(vals)); 

    int sum = 0;
    int ans = 0;
    for (auto x : vals) {
        sum += x.s;
        ans = max(ans, sum);
    }
    cout << ans << '\n';
}
