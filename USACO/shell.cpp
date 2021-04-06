/*
	ID: theredh1
	LANG: C++
	PROG: shell
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
int shell[3]={1,2,3}, ans[3]={0,0,0};

int main() {
    setIO("shell");
    int n;
    cin>>n;
	int i=0;
	
	while(i<n)
	{
		int a,b,g;
		cin>>a>>b>>g;
		swap(shell[a-1],shell[b-1]);
		ans[shell[g-1]-1]++;
		i++;
	}
	int max=INT_MIN;
	for(int i=0; i<3; i++)
	{
		max=fmax(ans[i],max);
	}
	cout<<max<<endl;
}


