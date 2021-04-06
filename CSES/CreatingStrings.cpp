#define pb push_back
#define PB pop_back
#define MP make_pair
#define MT make_tuple
#define f _first
#define s _second
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
int main() {
	string s;
	cin>>s;
	sort(s.begin(), s.end());
	vector<string> ans;
	do
	{
		ans.pb(s);
	}while(next_permutation(s.begin(), s.end()));
	cout<<ans.size()<<endl;
	for(string a: ans)
		cout<<a<<endl;
}
