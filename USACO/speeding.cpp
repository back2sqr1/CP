/*
	ID: theredh1
	LANG: C++
	PROG: speeding
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
   setIO("speeding");
  	int n,m, max=INT_MIN;
  	cin>>n>>m;
  	int i=0;
  	vector<pair<int,int>> speed, cow;
	while(i<n)
	{
		int num1, num2;
		cin>>num1>>num2;
		speed.pb({num1, num2});
		i++;
	}
	i=0;
	while(i<m)
	{
		int num1, num2;
		cin>>num1>>num2;
		cow.pb({num1, num2});
		i++;
	}
	int road=0, Croad=0;
	i=0;
	int j=0;
	while(road!=100 || Croad!=100)
	{
		if(road>Croad)
		{
			Croad+=cow[j].f;
			if(cow[j].s>speed[i].s)
			{
				max=fmax(max,cow[j].s-speed[i].s);
			}
			//cout<<Croad<<' '<<cow[j].s<<' '<<road<<' '<<speed[i].s<<' '<<max<<endl;
		}
		else if(road<Croad)
		{
			road+=speed[i].f;
			if(cow[j].s>speed[i].s)
			{
				max=fmax(max,cow[j].s-speed[i].s);
			}
	    //cout<<Croad<<' '<<cow[j].s<<' '<<road<<' '<<speed[i].s<<' '<<max<<endl;
		}
		else
		{
			road+=speed[i].f;
			Croad+=cow[j].f;
			if(cow[j].s>speed[i].s)
			{
				max=fmax(max,cow[j].s-speed[i].s);
			}
			//cout<<Croad<<' '<<cow[j].s<<' '<<road<<' '<<speed[i].s<<' '<<max<<endl;
		}
		
		if(road<Croad)
		i++;
		else if(road>Croad)
		j++;
		else
		{
			i++;
			j++;
		}
	}
	if(max==INT_MIN)
	max=0;
	
	cout<<max<<endl;
}


