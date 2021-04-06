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
	setIO("highcard");
	int n;
	cin>>n;
	int a[n*2];
	fill(a, a+n+n, 0);
	for(int i=0; i<n; i++)
	{
		int num;
		cin>>num;
		a[num-1]=1;
	}
//	for(int i=0; i<n*2; i++)
//	cout<<a[i];
//	cout<<endl;
	int ans=0, prev=0;
	for(int i=0; i<n*2; i++)
	{
		if(a[i]==1)
		{
			//cout<<i<<endl;
			int j=fmax(i+1,prev);
			bool over=false;
			while(a[j]!=0 && j<n*2)
			{
				//cout<<i<<' '<<j<<endl;
				j++;
				if(j>=n*2)
				{
					over=true;
					break;
				}
			}
			if(!over && j<n*2)
			{
				//cout<<j<<endl;
				a[j]=2;
				prev=j;
				ans++;
			}
			else
			{
				break;
			}
//			for(int i=0; i<n*2; i++)
//			cout<<a[i];
//			cout<<endl;
		}
	}
	cout<<ans<<endl;
}
