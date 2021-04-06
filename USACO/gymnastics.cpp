/*
	ID: theredh1
	LANG: C++
	PROG: gymnastics
*/
#include <bits/stdc++.h> // see C++ Tips & Tricks
using namespace std;
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
struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 
int main() {
    setIO("gymnastics");
	int k, n, con=0;
	cin>>k>>n;	
	int i=0;
	unordered_map<pair<int,int>, int, hash_pair> map;
	while(i<k)
	{
		vector<int> ar;
		for(int j=0; j<n; j++)
		{
			int num;
			cin>>num;
			ar.pb(num);
		}
		for(int j=0; j<n; j++)
		for(int p=j+1; p<n; p++)
		{
			if(j==p)
			continue;
			
			if(map[mp(ar[j], ar[p])]==0)
			map[mp(ar[j], ar[p])]=1;
			else 
			map[mp(ar[j], ar[p])]++;
			
			if(map[mp(ar[j], ar[p])]==k)
			con++;
			
		}
		i++;
	}
	cout<<con<<endl;
}


