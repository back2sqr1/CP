#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef long long ll; 
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define F1R(i,a) FOR(i,1,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define pb push_back
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}
const int SZ=6;
int main() {
    FIO;
    int n, k; cin>>n>>k;
    vpi v(k);
    bool foundC[n+1];
    memset(foundC,1, n+1);
	for(int i=0; i<k; i++)
    {
    	int a, b; cin>>a>>b;
    	a--; b--;
    	v[i]=mp(a, b);
    	foundC[a]=0;
    	foundC[b]=0;
	}
    
    vi a;
    for(int i=0; i<n; i++)
    {
    	a.pb(i);
    //	cout<<a[i]<<' ';
	}
	//cout<<endl;
	set<int> s[n+1];
	for(int i=0; i<n; i++)
	s[i].insert(i);
	
	for(int j=0; j<n; j++)
	{
		int i=0;
		while(!foundC[j])
		{
			i%=k;
			if(s[a[v[i].f]].count(v[i].s))
			foundC[a[v[i].f]]=1;
			s[a[v[i].f]].insert(v[i].s);
		
			if(s[a[v[i].s]].count(v[i].f))
			foundC[a[v[i].s]]=1;
			s[a[v[i].s]].insert(v[i].f);
		
			swap(a[v[i].f], a[v[i].s]);
			i++;
		}
		cout<<s[j].size()<<endl;
	}
	cout<<endl;
}


