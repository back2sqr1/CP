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
	int n;
	cin>>n;
	vector<int> P,V,T;
	int ans=0;
	for(int i=0; i<n; i++)
	{
		int num1, num2, num3;
		cin>>num1>>num2>>num3;
		if((num1==num2||num1==num3)  && num1==1)
		{
			ans++;	
		}	
		else if(num2==num3 && num2==1)
		{
			ans++;
		}
	}
	
	cout<<ans<<endl;
}
