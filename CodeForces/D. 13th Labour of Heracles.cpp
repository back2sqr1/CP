
#include <bits/stdc++.h>
using namespace std;
int t,n,w[100050],d[100050];
priority_queue<int> pq;
long long ans;
 
int main() {
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n); ans=0;
		for (int i=1; i<=n; ++i) {
			scanf("%d",w+i);
			ans+=w[i];
		}
		for (int i=3; i<=2*n; ++i) {
			int u; scanf("%d",&u);
			++d[u];
		}
		for (int i=1; i<=n; ++i)
			while (--d[i]) pq.push(w[i]);
		while (!pq.empty()) {
			cout<<ans<<' ';
			ans+=pq.top(); pq.pop();
		}
		cout<<ans<<'\n';
	}
}

