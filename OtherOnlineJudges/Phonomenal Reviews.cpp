#include <bits/stdc++.h>

using namespace std;

const int MX = 1e5 + 5;

vector<int> g[MX];
int depth[MX];
bool use[MX];
int n, m, sol, node, mini, nodes;

void dfs1 (int v, int parent) {
    nodes++;

    for (auto x: g[v]) {
        if (x == parent || !use[x]) continue;
        depth[x] = depth[v] + 1;

        if (depth[x] > mini) {
            mini = depth[v];
            node = x;
        }
        dfs1 (x, v);
    }
}

void dfs (int v, int parent) {

    for (auto x: g[v]) {
        if (x == parent) continue;
        dfs(x, v);
        use[v] |= use[x];
    }
}

int main () {
    cin >> n >> m;
    int root;
    cin>>root;
    use[root]=1;
    for (int i = 1; i < m; i++) {
        int cur;
        cin >> cur;
        use[cur] = true;
    }

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs (root, -1);//best path

    dfs1 (root, -1);//first dfs to find diameter

    mini = 0;
    nodes = 0;
    memset(depth, 0, sizeof(depth));
    dfs1 (node, -1);// diameter- finds furtherest node && counts nodes

    sol = ((nodes - 1) * 2) - depth[node];

    cout << sol << '\n';
}
