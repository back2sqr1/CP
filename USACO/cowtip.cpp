/*
	ID: theredh1
	LANG: C++
	PROG: lineup
*/
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
int main() {
    setIO("cowtip");
	int n;
	cin>>n;
	bool cow[n][n];
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
	{
		char a;
		cin>>a;
		if(a=='0')
		cow[i][j]=true;
		else
		cow[i][j]=false;
	}
	int ans = 0;
		// loop over the rectangles to consider from bottom to top, right to left
		for(int i = n-1; i >= 0; i--) {
			for(int j = n-1; j >= 0; j--) {
				if(cow[i][j] == false) {
					// the rectangles with bottom-right corner at (i, j) needs to be toggled
					ans++;
					for(int a = 0; a <= i; a++) {
						for(int b = 0; b <= j; b++) {
							// flip each entry in that rectangle
							if(cow[a][b] == false) {
								cow[a][b] = true;
							}
							else {
								cow[a][b] = false;
							}
						}
					}
				}
			}
		}

	cout<<ans<<endl;
}


