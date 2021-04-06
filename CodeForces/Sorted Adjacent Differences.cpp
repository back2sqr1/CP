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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n), ans;
		bool checked[n];
		fill(checked, checked+n, false);
		for(int i=0; i<n; i++)
		{
			cin>>v[i];
		}
		sort(all(v));
		int diff=INT_MAX, pt, pt2;
		for(int i=0; i<n-1; i++)
		{
			if(checked[i])
			continue;
				
			if(abs(v[i]-v[i+1])<diff)
			{
				pt=i;
				pt2=i+1;
				diff=abs(v[i]-v[i+1]);
			}
		}
//		cout<<v[pt]<<' '<<v[pt2]<<endl;
		checked[pt]=true;
		checked[pt2]=true;
		ans.pb(v[pt]);
		ans.pb(v[pt2]);
		int ptA=1;
		for(int j=0; j<n-2; j++)
		{
			int diff=INT_MAX, pt=INT_MAX;
			for(int i=0; i<n; i++)
			{
				if(checked[i])
				continue;
				
				if(abs(v[i]-v[ptA])<diff)
				{
					pt=i;
					diff=abs(v[i]-v[ptA]);
				}
			}
			ans.pb(v[pt]);
			checked[pt]=true;
			ptA++;
		}
		for(int i=0; i<n-1; i++)
		{
			cout<<ans[i]<<' ';
		}
		cout<<ans[n-1]<<endl;
	}
}
