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
int closestNeighbor[100], x[100], N;
int pass(int i)
{
  int left_nbr=-1, left_dist = 1000;
  int right_nbr=-1, right_dist = 1000;

  // Find closet neighbors on left and right                                                                                                     
  for (int j=0; j<N; j++)
    if (x[j] < x[i] && x[i]-x[j] < left_dist) { left_nbr = j; left_dist = x[i]-x[j]; }
  for (int j=0; j<N; j++)
    if (x[j] > x[i] && x[j]-x[i] < right_dist) { right_nbr = j; right_dist = x[j]-x[i]; }

  if (left_dist <= right_dist) return left_nbr;
  return right_nbr;
}
int main() {
    setIO("hoofball");
	cin>>N;
	for(int i=0; i<N; i++)
	{
		cin>>x[i];
	}
	for(int i=0; i<N; i++)
	{
		closestNeighbor[pass(i)]++;
	}
	int ans=0;
	for(int i=0; i<N; i++)
	{
		if(closestNeighbor[i]==0) 
		ans++;
		if(i<pass(i) && pass(pass(i))==i && closestNeighbor[i]==1 && closestNeighbor[pass(i)]==1)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}


