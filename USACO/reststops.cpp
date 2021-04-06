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
 
int L,N,rf,rb;
 
int x[100000];
int c[100000];
bool isMax[100000];
 void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
int main()
{
	 setIO("reststops");
	cin >> L >> N >> rf >> rb;
	for(int i=0;i<N;i++)
		cin >> x[i] >> c[i];
	int mx = 0;
	for(int i=N-1;i>=0;i--)
		if(c[i] > mx)
		{
			isMax[i] = 1;
			mx = c[i];
		}
	long long ans = 0;
	long long tf = 0;
	long long tb = 0;
	int lastx = 0;
	for(int i=0;i<N;i++) if(isMax[i])
	{
		tf += (x[i] - lastx)*((long long)rf);
		tb += (x[i] - lastx)*((long long)rb);
		ans += (tf - tb)*((long long)c[i]);
		tb = tf;
		lastx = x[i];
	}
	cout << ans << '\n';
}
