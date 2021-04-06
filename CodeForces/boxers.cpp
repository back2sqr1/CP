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
	//setIO("mountains");
	int n;
	cin>>n;
	vector<int> v;
	set<int> Set;
	for(int i=0; i<n; i++)
	{
		int num;
		cin>>num;
		v.pb(num);
	}
	sort(all(v));
//	for(int i=0;  i<n; i++)
//	cout<<v[i]<<' ';
//	cout<<endl;
	for(int i=0; i<n; i++)
	{
		if(Set.count(v[i]-1) || v[i]-1==0)
		{
			if(Set.count(v[i]))
			{
				if(Set.count(v[i]+1)==0)
				Set.insert(v[i]+1);
			}
			else
			{
				Set.insert(v[i]);
			}
		}
		else
		{
			Set.insert(v[i]-1);
		}
		
//		for(auto x: Set)
//		{
//			cout<<x<<' ';
//		}
//		cout<<endl;
	}
	cout<<Set.size()<<endl;
}
