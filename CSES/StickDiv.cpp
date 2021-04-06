/*
	ID: theredh1
	LANG: C++
	PROG: angry
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
	//setIO("fenceplan");
	ll n, x;
	cin>>x>>n;
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i=0; i<n; i++)
	{
		ll num;
		cin>>num;
		pq.push(num);
	}
	ll ans=0;
	while(pq.size()>1)
	{
		int a=pq.top();
		pq.pop();
		int b= pq.top();
		pq.pop();
		ans+=a+b;
		pq.push(a+b);
	}
	cout<<ans<<endl;
}

