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
	setIO("buckets");
	char field[10][10];
	pair<int,int> B, R, L;
	for(int i=0; i<10; i++)
	for(int j=0; j<10; j++)
	{
		cin>>field[i][j];
		if(field[i][j]=='B')
		{
			B.f=i;
			B.s=j;
		}
		if(field[i][j]=='R')
		{
			R.f=i;
			R.s=j;
		}
		if(field[i][j]=='L')
		{
			L.f=i;
			L.s=j;
		}
	}
	int ans=abs(L.f-B.f)+abs(L.s-B.s)-1;
	if((L.f==B.f && B.f==R.f && ((L.s<R.s && R.s<B.s)||(L.s>R.s && R.s>B.s))) || (L.s==B.s && B.s==R.s && ((L.f<R.f && R.f<B.f)||(L.f>R.f && R.f>B.f))))
	ans+=2;
	
	cout<<ans<<endl;
}
