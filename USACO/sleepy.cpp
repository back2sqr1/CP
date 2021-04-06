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
    setIO("sleepy");
	int n; 
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		int num;
		cin>>num;
		v.pb(num);	
	}
	int sorted=1;
	for(int i=n-1; i>0; i--)
	{
		if(v[i]>=v[i-1])
		sorted++;
		else
		break;
	}
	cout<<n-sorted<<endl;
}


