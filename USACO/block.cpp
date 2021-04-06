/*
	ID: theredh1
	LANG: C++
	PROG: blocks
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
 
int main(void)
{
	setIO("blocks");
	int n;
	cin>>n;
	int ans[26];
	memset(ans, 0, sizeof(ans));
	for(int i=0; i<n; i++)
	{
		int a[26], b[26];
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		string s1, s2;
		cin>>s1>>s2;
		for(int j=0; j<s1.length(); j++)
		{
			a[s1[j]-'a']++;
		//	cout<<s1[j]-'a'<<endl;
		}
		for(int j=0; j<s2.length(); j++)
		{
			b[s2[j]-'a']++;
		//	cout<<s2[j]-'a'<<endl;
		}
		for(int j=0; j<26; j++)
		{
			ans[j]+=fmax(a[j], b[j]);
		}
	}
	for(int i=0; i<26; i++)
	cout<<ans[i]<<endl;
}

