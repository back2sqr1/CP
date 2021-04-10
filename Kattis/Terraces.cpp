#include <bits/stdc++.h>

using namespace std;
int R, C;
int grid[500][500];
int rt[500*500], res[500*500];

int spot(int i, int j) {
    return i*R+j;
}

int find(vector<int>& rt, int a) {
    if(rt[a] == -1) return a;
    return rt[a] = find(rt, rt[a]);
}

void join(vector<int>& rt, int a, int b) {
    a = find(rt, a);
    b = find(rt, b);
    if(a == b) return;
    rt[a] = b;
}

int main() {
    cin >> R >> C;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    vector<bool> res(R*C, true);
    vector<int> rt(R*C, -1);

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(i > 0) {
                if(grid[i][j] == grid[i-1][j]) join(rt, spot(i,j), spot(i-1,j));
                else if(grid[i][j] < grid[i-1][j])  res[spot(i-1,j)] = false;
                else res[spot(i,j)] = false;
            }
            if(j > 0) {
                if(grid[i][j] == grid[i][j-1]) join(rt, spot(i,j), spot(i,j-1));
                else if(grid[i][j] < grid[i][j-1])  res[spot(i,j-1)] = false;
                else  res[spot(i,j)] = false;
            }
        }
    }

    for(int i = 0; i < R*C; i++) {
        int here = find(rt, i);
        if(!res[i]) res[here] = false;
    }

    int count = 0;
    for(int i = 0; i < R*C; i++) {
        int here = find(rt, i);
        if(res[here]) count++;
    }

    cout << count << endl;
}
