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
int main()
{
	setIO("word");
	int n, k;
	cin>>n>>k;
	vector<string> v;
	for(int i=0; i<n; i++)
	{
		string s;
		cin>>s;
		v.pb(s);
	}
	int j=1, charCount=v[0].length();
	string s=v[0];
	while(j<n)
	{
		if(v[j].length()+charCount<=k)
		{
			s+=' '+v[j];
			charCount+=v[j].length();
		}
		else
		{
			cout<<s<<endl;
			s=v[j];
			charCount=v[j].length();
		}
		j++;
	}
	cout<<s<<endl;
}
