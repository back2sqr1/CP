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
int n;
vi adj[]
void bfs()
{
	vector<int> d(n, INT_MAX);
	d[s] = 0;
	deque<int> q;
	q.push_front(s);
	while (!q.empty()) {
	    int v = q.front();
	    q.pop_front();
	    for (auto edge : adj[v]) {
	        int u = edge.first;
	        int w = edge.second;
	        if (d[v] + w < d[u]) {
	            d[u] = d[v] + w;
	            if (w == 1)
	                q.push_back(u);
	            else
	                q.push_front(u);
	        }
	    }
	}
}
int main() {
    
}


