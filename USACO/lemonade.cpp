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
	setIO("lemonade");
	int n;
	cin>>n;
	vector<int> cows;
	for(int i=0; i<n; i++)
	{
		int num;
		cin>>num;
		cows.pb(num);
	}
	sort(all(cows));
	int ctr=0;
	int ans=0;
	for(int i=n-1; i>=0; i--)
	{
		if(ctr<=cows[i])
		{
			ans++;
			ctr++;
		}
		else
		break;
	}
	cout<<ans<<endl;
}
