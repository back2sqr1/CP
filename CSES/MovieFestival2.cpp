#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int n, k;
vector<pair<int, int> > v(n);

int main() {
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());


    int ans = 0;
    multiset<int> st;

    for (int i = 0; i < n; i++) {

        bool flag = 0;
        if (!st.empty()) {
            auto it = st.upper_bound(v[i].second);
            if (it != st.begin()) {
                --it;
                if (*it <= v[i].second) {
                    st.erase(it);
                    st.insert(v[i].first);
                    flag = 1, ans++;
                }
            }
        }

        if (st.size() < k && flag == false) {
            st.insert(v[i].first);
            ans++;
        }
    }


    cout << ans;
}
