/*
	ID: theredh1
	LANG: C++
	PROG: whereami
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
    setIO("whereami");
    ll n;
    string s;
    cin>>n>>s;
    for(int i=1; i<n; i++)
    {
    	unordered_map<string,int> map;
    	bool flag=false;
		for(int j=0; j<n-i+1; j++)
		{
			if(map[s.substr(j,i)]==0)
			map[s.substr(j,i)]=1;
			else
			{
				flag=true;
				break;
			}
		}
		if(!flag)
		{
			cout<<i<<endl;
			return 0;
		}
	}

	

}


