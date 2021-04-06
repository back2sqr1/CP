/*
	ID: theredh1
	LANG: C++
	PROG: notlast
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
#define all(x) (x).begin(), (x).end()
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
void show(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}
void showrev(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[v.size()-i-1]<<" ";
    cout<<"\n";
}
void showarr(ll arr[],ll n)
{
    for(ll i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
struct Rect{
	int x1,y1,x2,y2;
	int area()
	{
		return (x2-x1)*(y2-y1);
	}
};
int oddsO=0, evensE=0, oddsE=0, evensO=0;
vector<ll> digits(ll n)
{
	vector<ll> ans;
	int ctr=1;
	while(n>0)
	{
		ans.pb(n%10);
		if((n%10)%2==0)
		{
			if(ctr%2==0)
			evensE++;
			else
			evensO++;
		}
		else
		{
			if(ctr%2==0)
			oddsE++;
			else
			oddsO++;
		}
		n/=10;
		ctr++;
	}
	return ans;
}
int main() {
    //setIO("notlast");
   	int t, itt=0;
   	cin>>t;
   	while(itt<t)
   	{
   		oddsO=0; evensE=0; oddsE=0; evensO=0;
   		ll n, len;
		cin>>len>>n;
		if(len==1)
		{
			if(n%2==0)
			{
				cout<<2<<endl;
				itt++;
				continue;
			}
			else
			{
				cout<<1<<endl;
				itt++;
				continue;
			}
		}
		vector<ll> nums=digits(n);
   		//showrev(nums);
//   		int odds=oddsO+oddsE;
//   		int evens=evensO+evensE;
   		int Raze=oddsO+evensO;
   		if(oddsO==0)
   		{
   			cout<<2<<endl;
   			itt+;
			continue;	
		}
   		int Ben=evensE+oddsE;
   		if(evensE==0)
   		{
   			cout<<1<<endl;
   			itt++;
   			continue;	
		}
   		if(Ben<Raze)
   		{
   			cout<<1<<endl;
   			itt++;
			continue;	
		}
		else if(Raze<=Ben)
		{
			cout<<2<<endl;
			itt++;
			continue;
		}
   		
   		cout<<endl;	
   		itt++;
	}
}

