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
//struct classcomp {
//  bool operator() (const char& lhs, const char& rhs) const
//  {return lhs<rhs;}
//};
//bool cmp(const pair<string, int>& a, 
//         const pair<string, int>& b) 
//{ 
//	if(a.s==b.s)
//	return a.f<b.f;
//	
//    return a.second < b.second; 
//} 
//pair<pair<string,int>, int> sort(map<string, int> M) 
//{ 
//   
//    vector<pair<string, int> > A; 
//    for (auto it : M) { 
//        A.push_back(it); 
//    } 
//    sort(A.begin(), A.end(), cmp); 
//	int count=1;
//	for(int i=A.size()-2; i>=0; i--)
//	{
//		if(A[A.size()-1].s==A[i].s)
//		count++;
//		else
//		break;
//	}
//	return mp(A[A.size()-1],count);
//} 
  
int main() {
	setIO("measurement");
   	int n;
   	cin>>n;
   	map<string, int> map;
   	map["Bessie"]=map["Elsie"]=map["Mildred"]=7;
   	vector<pair<int, pair<string,int>>> v;
   	for(int i=0; i<n; i++)
   	{
   		int n1, n2;
   		string s;
   		char a;
   		cin>>n1>>s>>a>>n2;
   		if(a=='-')
   		n2*=-1;
   		v.pb(mp(n1, mp(s, n2)));
	}
	sort(all(v));
//	cout<<endl;
//	for(auto x: v)
//	cout<<x.s.f<<' '<<x.s.s<<endl;
	int ans=0;
//	pair<pair<string,int>, int> curr=mp(mp("",0), 0);
	tuple< bool, bool , bool> c=make_tuple(false, false, false);
	for(int i=0; i<n; i++)
	{
		map[v[i].s.f]+=v[i].s.s;
		int x=fmax(map["Bessie"], fmax(map["Elsie"],map["Mildred"]));
		bool B=false,E=false,M=false;
		if(x==map["Bessie"])
		B=true;
		if(x==map["Elsie"])
		E=true;
		if(x==map["Mildred"])
		M=true;
		if(c!=make_tuple(B,E,M))
		{
			ans++;
	//		cout<<get<0>(c)<<' '<<get<1>(c)<<' '<<get<2>(c)<<' ';
			c=make_tuple(B,E,M);
	//		cout<<get<0>(c)<<' '<<get<1>(c)<<' '<<get<2>(c)<<endl;
		}
		
	//cout<<x.f<<' '<<x.s<<endl;
	}
	cout<<ans<<endl;
}

