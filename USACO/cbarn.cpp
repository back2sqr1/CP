/*
	ID: theredh1
	LANG: C++
	PROG: cbarn
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
  	setIO("cbarn");
  	int n,i=0;
  	cin>>n;
  	int arr[n], min=INT_MAX;
	while(i<n)
  	{
  		cin>>arr[i];
  		i++;
	}
	for(int i=0; i<n; i++)
	{
		int pt=i, count=0;
		for(int j=0; j<n; j++)
		{
			if(pt==n)
			{
				pt=0;
			}
			count+=arr[pt]*j;
			pt++;
		}
		min=fmin(count, min);
	}
	cout<<min<<endl;
}

