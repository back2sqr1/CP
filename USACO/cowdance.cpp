/*
	ID: theredh1
	LANG: C++
	PROG: moobuzz
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
ll N,K;
vector<int> V;
bool check(ll x)
{
	ll l=0;
	priority_queue<int, vector<int> , greater<int>> pq;
	for(int i=0; i<N; i++)
	{
		if(pq.size()==x)
		{
			l=pq.top();
			pq.pop();
		}
	//	cout<<l+V[i]<<' ';
		if(l+V[i]>K)
		{
	//		cout<<endl;
			return false;
		}
		
		pq.push(l+V[i]);
	}
//	cout<<endl;
	return true;
} 
int main() {
    setIO("cowdance");
    cin>>N>>K;
    for(int i=0;i<N; i++)
    {
    	ll num;
    	cin>>num;
    	V.pb(num);
	}
	ll small=1, big=N, ans=N;
	while(small<=big)
	{
		ll mid=small+(big-small)/2;
		if(check(mid))
		{
			ans=mid;
			big=mid-1;
		}
		else
		{
			small=mid+1;
		}
	//cout<<small<<' '<<big<<endl;
	}
	cout<<ans<<endl;
}

