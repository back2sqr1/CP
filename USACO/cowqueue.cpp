/*
	ID: theredh1
	LANG: C++
	PROG: cowqueue
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
    setIO("cowqueue");
  	int n;
  	cin>>n;
  	int i=0; 
  	vector<pair<int,int>> cows;
	while(i<n)
  	{
  		int num, num2;
  		cin>>num>>num2;
  		cows.pb(mp(num,num2));	
  		i++;	
	}
	sort(cows.begin(), cows.end());
	int time=0;
//	for(int i=0; i<cows.size(); i++)
//	{
//		cout<<cows[i].f<<' '<<cows[i].s<<endl;
//	}
	for(int i=0; i<cows.size(); i++)
	{
		if(cows[i].f>=time)
		{
			time=cows[i].f+cows[i].s;
		}
		else
		{
			time+=cows[i].s;
		}
		//cout<<time<<endl;
	}
	cout<<time<<endl;
}

