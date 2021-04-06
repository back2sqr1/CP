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
bool isSorted(vector<int> v)
{
	for(int i=0; i<v.size()-1; i++)
	{
		if(v[i]>v[i+1])
		{
			return false;
		}
	}
	return true;
}
int main() {
    setIO("outofplace");
	int n;
	cin>>n;
	vector<int> v(n), srt;
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
	}
	srt=v;
	sort(all(srt));
	int ans = -1;
		for(int a = 0; a < n; a++) {
			if(srt[a] != v[a]) {
				ans++;
			}
		}
	cout<<ans<<endl;
}


