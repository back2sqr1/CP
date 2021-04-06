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
#define all(x) (x).begin(), (x).end()
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
    //setIO("billboard");
	Rect a,b,c;
	cin>>a.x1>>a.y1>>a.x2>>a.y2;
	cin>>b.x1>>b.y1>>b.x2>>b.y2;
	cin>>c.x1>>c.y1>>c.x2>>c.y2;
	
	//x1,y1 is part
	if(a.x1<b.x2 && a.x1>=b.x1 && a.y1>=b.y1 && a.y2<=b.y2)
	{
		if(a.x2<=b.x2)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		a.x1=b.x2;
	}
	else if(a.x1<b.x1 && a.x2>b.x1 && a.x2<=b.x2 && a.y1>=b.y1 && a.y2<=b.y2)
	{
		a.x2=b.x1;
	}
	else if(a.x1>=b.x1 && a.x2<=b.x2)
	{
		if(a.y1<b.y2 && a.y1>=b.y1 && a.y2<=b.y1)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		if(a.y1<b.y2 && a.y1>=b.y1 && a.y2>b.y1)
		{
			a.y1=b.y2;	
		}
		else if(a.y1<b.y1 && a.y2<=b.y2 && a.y2>b.y1)
		a.y2=b.y1;
	}
	
	if(a.x1>=c.x1 && a.x2<=c.x2 && a.y2<=c.y2 && a.y1>=c.y1)
	{
		cout<<"NO"<<endl;
	}
	else
	cout<<"YES"<<endl;
}

