#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
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
        freopen((name+".txt").c_str(), "r", stdin); 
        freopen((name+"-23.txt").c_str(), "w", stdout);
    }
}
bool cmp(const vi &a, const vi &b)
{
	int i=0;
	while(a[i]==b[i])
		i++;
	return a[i]<b[i];
}
int ans=1e9, n;
bool found=0;
set<vi> st;
void print(std::vector <int> const &a) {
   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';
   cout<<endl;
}
void binTree(vi v, vi srt, int t=0)
{

	if(v==srt)
	{
		found=1;
		ans=min(t, ans);
		return;
	}

	if(st.count(v))
		return; 
	st.insert(v);
	vi temp=v;
	for(int i=0; i<v.size(); i+=2)
	swap(v[i],v[i+1]);

	binTree(v, srt, t+1);
		
	for(int i=0; i<n; i++)
	swap(temp[i], temp[i+n]);
		
	binTree(temp, srt, t+1);		
}
int main() {
    FIO;
    //setIO("testcases");
    cin>>n; 
	vi v(2*n); trav(x, v) cin>>x;
	vi srt=v;
	sort(all(srt));
	binTree(v, srt);
	cout<<(found?ans:-1)<<endl;
}

