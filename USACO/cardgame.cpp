/*
	ID: theredh1
	LANG: C++
	PROG: angry
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
	setIO("cardgame");
	ll n;
	cin>>n;
	bool a[n*2+1];
	memset(a, false, n*2+1);
	vector<int> up, down;
	for(int i=0; i<n/2; i++)
	{
		ll num;
		cin>>num;
		up.pb(num);
		a[num]=true;
	}
	for(int i=0; i<n/2; i++)
	{
		ll num;
		cin>>num;
		down.pb(num);
		a[num]=true;
	}
	sort(all(up), greater<int>());
	sort(all(down));
	ll ans=0, prev1=n*2, prev2=1;
	for(int i=0; i<n/2; i++){
		ll j=prev1;
		
		while(a[j])
		{
			if(j<=up[i])
			{
				break;
			}
			
			j--;
		}
		if(j!=0 && j>up[i])
		{
			ans++;
			a[j]=true;
			prev1=j;
			//cout<<j<<"here1"<<' '<<up[i]<<endl;
		}
	}
	for(int i=0; i<n/2; i++)
	{
		ll j=prev2;
		
		while(a[j])
		{
			if(j>=down[i])
			{
				break;
			}
			//cout<<j<<endl;
			j++;
		}
		if(j!=n*2+1 && j<down[i])
		{
			ans++;
			a[j]=true;
			prev2=j;
		//	cout<<j<<"here2"<<' '<<down[i]<<endl;
		}
	}
	cout<<ans<<endl;
}

