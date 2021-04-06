/*
	ID: theredh1
	LANG: C++
	PROG: mixmilk
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
vector<int> cups, maxs;
void move(vector<int> &cups, int a, int b)
{
	a--;
	b--;
	cups[b]+=cups[a];
	if(cups[b]>maxs[b])
	{
		cups[a]=cups[b]-maxs[b];
		cups[b]=maxs[b];
	}
	else
	cups[a]=0;
	
	//cout<<cups[a]<<' '<<cups[b]<<endl;
}
int main() {
    setIO("mixmilk");
  	for(int i=0; i<3; i++)
	{
		int num1, num2;
		cin>>num1>>num2;
		maxs.pb(num1);
		cups.pb(num2);
	}
	move(cups, 1, 2);
	move(cups, 2, 3);
	move(cups, 3, 1);
	move(cups, 1,2);
	for(int i=0; i<3; i++)
	{
		cout<<cups[i]<<endl;
	}
}


