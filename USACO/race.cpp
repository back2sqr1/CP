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
int solve(int dist) {
  int minspeed;
  cin>>minspeed;
  int lhstravel = 0;
  int rhstravel = 0;
  int timeused = 0;
  for(int currspeed = 1;; currspeed++) {
    lhstravel += currspeed;
    timeused++;
    if(lhstravel + rhstravel >= dist) return timeused;
    if(currspeed >= minspeed) {
      rhstravel += currspeed;
      timeused++;
      if(lhstravel + rhstravel >= dist) return timeused;
    }
  }
}
int main() {
    setIO("race");
	int k, n;
	cin>>k>>n;
	for(int i=0; i<n; i++)
	{
		cout<<solve(k)<<endl;
	}
}


