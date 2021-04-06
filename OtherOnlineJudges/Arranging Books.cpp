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
bool cmp(const pair<int,int>&a, const pair<int,int> &b)
{
	if(a.f==b.f)
	return a.s<b.s;
	
	return a.f<b.f;
}
const int SZ=1001;
//bool box[SZ][SZ], vis[SZ][SZ];
int main() {
    FIO;
    string s;
    cin>>s;
    int a[3]={0};
    for(int i=0; i<s.length(); i++)
    {
    	if(s[i]=='L')
    	a[0]++;
    	if(s[i]=='M')
    	a[1]++;
    	if(s[i]=='S')
    	a[2]++;
	}
	int i=0, ans=0;
	queue<int> M, S;
	for(; i<a[0]; i++)
	{
		if(s[i]!='L')
		{
			ans++;
			if(s[i]=='M')
			M.push(i);
			else
			S.push(i);
		}
	}
	for(i=a[0]; i<a[0]+a[1] && !M.empty(); i++)
	{
		if(s[i]=='L')
		{
			int b= M.front();
			M.pop();
			swap(s[b], s[i]);
		}
	}
	while(!M.empty())
	{
		int b=M.front();
		M.pop();
		S.push(b);
	}
	//cout<<s<<endl;
	for(; i<s.length(); i++)
	{
		if(s[i]=='L')
		{
			int b= S.front();
			S.pop();
			swap(s[b], s[i]);
		}
	}
	for(i=a[0]; i<a[0]+a[1]; i++)
	{
		if(s[i]!='M')
		{
			ans++;
		}
	}
	
	cout<<ans<<endl;
}
