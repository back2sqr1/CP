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
	setIO("mountains");
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	bool check[n];
	fill(check, check+n, false);
	for(int i=0; i<n; i++)
	{
		int num1, num2;
		cin>>num1>>num2;
		v.pb(mp(num2, num1));
	}
	sort(all(v));
	for(int i=0; i<n; i++)
	{
		swap(v[i].f, v[i].s);
	}
//	for(int i=0; i<n; i++)
//	cout<<v[i].f<<' '<<v[i].s<<endl;
	int ans=n;
	for(int i=n-1; i>=0; i--)
	{
		if(check[i])
		continue;
		for(int j=i-1; j>=0; j--)
		{
			if(check[j])
			{
				continue;
			}
			//cout<<v[i].f<<' '<<v[i].s<<' '<<v[j].f<<' '<<v[j].s<<endl;
			if(v[j].f!=v[i].f)
			{
				if((v[i].s-v[j].s)>=abs(v[i].f-v[j].f))
				{
					check[j]=true;
					ans--;
				}
			}		
		}
	}
	cout<<ans<<endl;
}
