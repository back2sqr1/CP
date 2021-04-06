#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi; 
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    FIO;
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vi v(n); 
		int ans=0, curr=1;
		for(int i=0; i<n; i++){
			cin>>v[i];
			if(v[i]!=curr)
			ans++;
			else
			curr++;
		}
		cout<<ans<<endl;
	}
}


