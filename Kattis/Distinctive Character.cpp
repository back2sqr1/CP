#include <bits/stdc++.h>
using namespace std;
//no solved 
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
using namespace std;
const int maxn = 1e5 + 10;
int dis[1 << 21];
queue<int> que;
 
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    string s;
    memset(dis, -1, sizeof(dis));
    for (int i = 0; i < n; i++) {
        cin >> s;
        int v = 0;
        for (int j = 0; j < m; j++) {
            if (s[j] == '1') {
                v |= (1 << j);
            }
        }
        que.push(v);
        dis[v] = 0;
    }
    int ans = 0, maxx = 0;
    while (!que.empty()) {
        int val = que.front();
        que.pop();
        for (int i = 0; i < m; i++) {
            int neww = val ^(1 << i);
            if (dis[neww] != -1) continue;
            que.push(neww);
            dis[neww] = dis[val] + 1;
            if (dis[neww] > maxx) {
                maxx = dis[neww];
                ans = neww;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        if (ans & (1 << i)) cout << "1";
        else cout << "0";
    }
    puts("");
    return 0;
}

