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
int main() {
    setIO("notlast");
    int n, i=0;
    cin>>n;
  	unordered_map<string, int> map;
	map["Bessie"]=map["Elsie"]=map["Daisy"]=map["Gertie"]=map["Annabelle"]=map["Maggie"]=map["Henrietta"]=0;
	int low=INT_MAX;
	while(i<n)
	{
		int num;
		string s;
		cin>>s>>num;
		map[s]+=num;
		i++;
	} 
	vector<pair<int, string>> v; 
	for(auto x:map)
	{
		v.pb(mp(x.s,x.f));
//		cout<<x.s<<' '<<x.f<<endl;
	}
	sort(all(v));
	for(int i=1; i<v.size(); i++)
	{
//		cout<<v[i].f<<endl;
		if(v[i].f!=v[i-1].f)
		{
			if(i+1<v.size() && v[i+1].f==v[i].f)
			{
				cout<<"Tie"<<endl;
			}
			else
			cout<<v[i].s<<endl;
			
			return 0;
		}
	}
	cout<<"Tie"<<endl;
}

