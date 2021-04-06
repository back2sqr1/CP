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
int main()
{
	//setIO("revegetate");
	int n, m;
	cin>>n>>m;
	int A[151], B[151], G[101];
	for(int i=0; i<m; i++)
	{
		cin>>A[i]>>B[i];
		if(B[i]<A[i])
		swap(B[i],A[i]);
		
	}
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<A[i]<<' '<<B[i]<<' '<<i<<endl;
	}
	for (int i=1; i<=n; i++) {
    int g;
    for (g = 1; g <= 4; g++) {
      bool ok = true;
      for (int j=0; j<m; j++) 
		if (B[j] == i && G[A[j]] == g) ok = false;
      if (ok) break;
    }
    G[i] = g;
    cout << g;
  }
}
