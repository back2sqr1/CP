/*
	ID: theredh1
	LANG: C++
	PROG: citystate
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
#define all(x) (x).begin(), (x).end()
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
void show(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}
void showrev(vector<ll> v)
{
    for(ll i=0; i<v.size(); i++)
        cout<<v[v.size()-i-1]<<" ";
    cout<<"\n";
}
void showarr(ll arr[],ll n)
{
    for(ll i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
struct Rect{
	int x1,y1,x2,y2;
	int area()
	{
		return (x2-x1)*(y2-y1);
	}
};
int main() {
   	setIO("rental");
  	 ll N, M, R;
   	cin>>N>>M>>R;
   	vector<ll> n, r;
   	vector<pair<ll,ll>> m;
	for(int i=0; i<N; i++)
	{
		ll num;
		cin>>num;
		n.pb(num);
	}
	sort(all(n), greater<int>());
	for(int i=0; i<M; i++)
	{
		ll n1, n2;
		cin>>n1>>n2;
		m.pb(mp(n2, n1));
	}
	sort(all(m), greater<pair<int,int>>());
	for(int i=0; i<R; i++)
	{
		ll num;
		cin>>num;
		r.pb(num);
	}
	sort(all(r), greater<int>());
//	for(int i=0;i<M; i++)
//	{
//		cout<<m[i].f<<' '<<m[i].s<<endl;
//	}
	ll pre[R+1];
	pre[0]=0;
	for(int j=1; j<=R; j++)
	{
		pre[j]=pre[j-1]+r[j-1];
	//	cout<<rs<<' ';
	}
	ll ans=0, curr=0, total=0, t=0, in=0, prev=0;
	for(int i=0; i<N; i++)
	{
		total=n[i];
	//cout<<total<<":"<<' ';
		while(total>=m[in].s && in<M)
		{
			t+=m[in].f*m[in].s;
			total-=m[in].s;
			in++;
		}
		if(in<M)
		{
			t+=total*m[in].f;
			m[in].s-=total;
			total=0;
		}
		//	cout<<t<<' ';
		ll x=t, c=fmin(N-i-1, R);
		if(c>=0)
			x+=pre[c];	
		ans=fmax(x, ans);
		//cout<<": "<<t+x<<' '<<x<<endl;
		
	}
	cout<<ans<<endl;
}

