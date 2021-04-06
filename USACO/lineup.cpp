/*
	ID: theredh1
	LANG: C++
	PROG: lineup
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
string cows[8]={ "Beatrice","Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup"  , "Sue"};
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
bool satisfy(vector<pair<string,string>> names)
{
	for(int j=0; j<names.size(); j++)
	{
		if(abs(find(cows, cows+8, names[j].f)-find(cows,cows+8, names[j].s))!=1)
		return false;
	}
	return true;
}
int main() {
    setIO("lineup");
	int n, p=0;
	cin>>n;
	
	vector<pair<string,string>> names;
	while(p<n)
	{
		string cow1, temp2, temp3, temp4, temp5, cow2;
		cin>>cow1>>temp2>>temp3>>temp4>>temp5>>cow2;
		names.pb(mp(cow1,cow2));
		p++;
	}
//	for(int i=0; i<names.size(); i++)
//	{
//		cout<<names[i].f<<' '<<names[i].s<<endl;
//	}
	do
	{
		if(satisfy(names))
		break;
	} while(next_permutation(cows, cows+8));
	for(int i=0; i<8; i++)
	{
		cout<<cows[i]<<endl;
	}
}


