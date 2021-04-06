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
	setIO("teleport");
	int a, b, x, y;
	cin>>a>>b>>x>>y;
	int min=abs(b-a);
	if(abs(a-x)<abs(a-y))
	{
		min=fmin(abs(y-b)+abs(a-x), min);
	}
	else
	{
		min=fmin(abs(x-b)+abs(a-y), min);
	}
	cout<<min<<endl;
}
