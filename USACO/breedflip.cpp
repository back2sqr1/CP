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
    setIO("breedflip");
	int n;
	string a, b;
	cin>>n>>a>>b;
	int ans =0;
	for(int i=0; i<n; i++)
	{
		if(a[i]!=b[i])
		{
			while(a[i+1]!=b[i+1] && i+1<n)
			{
				i++;
			}
			ans++;
		}
	}
	cout<<ans<<endl;
}


