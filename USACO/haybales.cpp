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
	setIO("haybales");
	int n, q;
	cin>>n>>q;
	vector<int> nums;
	for(int i=0; i<n; i++)
	{
		int num;
		cin>>num;
		nums.pb(num);
	}
	sort(all(nums));
	for(int i=0; i<q; i++)
	{
		int n1, n2;
		cin>>n1>>n2;
		cout<<upper_bound(all((nums)), n2)-lower_bound(all(nums),n1)<<endl;
	}
}
