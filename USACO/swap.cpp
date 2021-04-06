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
int cows[101], cowsT[101];
void reverse(int one, int two, int cow)
{
	int l=one, r=two;
	if(cow==0)
	{
		while(l<r)
		{
			swap(cowsT[l], cowsT[r]);
			l++;
			r--;
		}
	}
	else
	{
		while(l<r)
		{
			swap(cows[l], cows[r]);
			l++;
			r--;
		}
	}
}
bool checkcycle(int n)
{
	for(int i=1; i<=n; i++)
	{
		if(cowsT[i]!=i)
		return false;		
	}
	return true;
}
int main()
{
	setIO("swap");
	int n, k, a1, a2, b1, b2;
	cin>>n>>k>>a1>>a2>>b1>>b2;
	for(int i=1; i<=n; i++)
	{
		cows[i]=i;
		cowsT[i]=i;
	}
	bool cycle=false;
	int ctr=0;
	while(!(checkcycle(n)) || ctr==0)
	{
		reverse(a1, a2,0);
		reverse(b1, b2,0);
//		for(int i=1; i<=n; i++)
//		cout<<cows[i]<<' ';
//		cout<<endl;	
		ctr++;
	}
	//cout<<ctr<<endl;
	for(int i=0; i<(k)%(ctr); i++)
	{
		reverse(a1, a2,1);
		reverse(b1, b2,1);
		//cout<<i<<endl;
//		for(int i=1; i<=n; i++)
//		cout<<cows[i]<<' ';
//		cout<<endl;	

	}
	for(int i=1; i<=n; i++)
	cout<<cows[i]<<endl;
}
