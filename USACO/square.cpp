/*
	ID: theredh1
	LANG: C++
	PROG: square
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
    setIO("square");
  	Rect one, two;
  	cin>>one.x1>>one.y1>>one.x2>>one.y2;
  	cin>>two.x1>>two.y1>>two.x2>>two.y2;
  	cout<<pow(fmax((fmax(one.x2,two.x2)-fmin(one.x1,two.x1)), (fmax(one.y2,two.y2)-fmin(one.y1,two.y1))),2);
}

