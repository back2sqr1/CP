/*
	ID: theredh1
	LANG: C++
	PROG: citystate
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
int main() {
   	setIO("lifeguards");
    int n;
    cin>>n;
    vector<pair<int,int>> vp;
    for(int i=0; i<n; i++)
    {
    	int num1, num2;
    	cin>>num1>>num2;
    	vp.pb(mp(num1,num2));
	}
	int ans=0;
	sort(all(vp));
//	for(int i=0; i<n; i++)
//	cout<<vp[i].f<<' '<<vp[i].s<<endl;
	for(int i=0; i<n; i++)
	{
		int temp=0;
		vector<pair<int,int>> vi=vp;
		vi.erase(vi.begin()+i);
	//	for(int i=0; i<n-1; i++)
	//cout<<vi[i].f<<' '<<vi[i].s<<endl;
		pair<int,int> curr=vi[0];
		for(int j=0; j<n-1; j++)
		{
			if(curr.s>=vi[j].f)
			{
				curr.s=vi[j].s;
			}
			else 
			{
				temp+=curr.s-curr.f;
				curr=vi[j];
			}
		}
		temp+=curr.s-curr.first;
		ans=fmax(temp, ans);
	}
	cout<<ans<<endl;
}

