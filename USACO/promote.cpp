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
	setIO("promote");
	vector<pair<int,int>> div;
	vector<int> a(3);
	int promo=0;
	for(int i=0; i<4; i++)
	{
		int num1, num2;
		cin>>num1>>num2;
		div.pb(mp(num1,num2));
	}
	promo=div[3].s-div[3].f;
	a[2]=promo;
	for(int i=2; i>0; i--)
	{
		promo+=div[i].s-div[i].f;
		a[i-1]=promo;
	}
	for(int i=0; i<3; i++)
	{
		cout<<a[i]<<endl;
	}
}
