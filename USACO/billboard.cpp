/*
	ID: theredh1
	LANG: C++
	PROG: billboard
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
struct Rect{
	int x1,y1,x2,y2;
	int area()
	{
		return (x2-x1)*(y2-y1);
	}
};
int main() {
    setIO("billboard");
	Rect a,b;
	cin>>a.x1>>a.y1>>a.x2>>a.y2;
	cin>>b.x1>>b.y1>>b.x2>>b.y2;
	if(b.x1<=a.x1 && b.x2>=a.x2 && b.y1<=a.y1 && b.y2>=a.y1)
	{
		cout<<0<<endl;
		return 0;
	}
	if(b.x1==a.x1 && b.x2==a.x2)
	{
		if(b.y1<=a.y1){
			a.y1=b.y2;
		}
		else if(b.y2>=a.y2)
		{
		a.y2=b.y1;
		}
	}
	if(b.y1<=a.y1 && b.y2>=a.y2)
	{
		if(b.x1<a.x1)
		{
			if(b.x2<a.x2 && a.x1<b.x2)
			a.x1=b.x2;
		}
		else if(b.x1>a.x1)
		{
			if(b.x2>a.x2 && a.x2>b.x1)
			a.x2=b.x1;
		}
	}
	if(b.x1<=a.x1 && b.x2>=a.x2 && a.y2>b.y1 && a.y2<=b.y2 && a.y1<b.y1)
	{
		a.y2=b.y1;
	}
	if(b.x1<=a.x1 && b.x2>=a.x2 && a.y1>=b.y1 && a.y1<b.y2 && a.y2>b.y2)
	{
		a.y1=b.y2;
	}
	cout<<a.area()<<endl;
}

