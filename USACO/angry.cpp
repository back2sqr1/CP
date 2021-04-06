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
vector<int> v;
pair<int,int> findF(int i)
{
	int j=i, r=1;
	int count=0;
	while(j+1<v.size())
	{
		if(j+1<v.size() && abs(v[j+1]-v[j])<=r)
		{
			int k=v[j];
			j++;
		//	cout<<v[j]<<' ';
			while(j+1<v.size() && abs(v[j+1]-k)<=r)
			{
				j++;
			//	cout<<v[k]<<' ';
			}
		//	cout<<v[j]<<' ';
			r++;
			count++;
		}
		else
		break;
	}
	r=1;
	while(i-1>=0)
	{
		if(i-1>=0 && abs(v[i-1]-v[i])<=r)
		{
			int k=v[i];
			i--;
		//	cout<<v[i]<<' ';
			while(i-1>=0 && abs(v[i-1]-k)<=r)
			{
				i--;
			//	cout<<v[k]<<' ';
			}
		//	cout<<endl;
			//cout<<v[i]<<' ';
			r++;
			count++;
		}
		else
		break;
	}	
//	cout<<endl;
	//cout<<v[j]<<' '<<v[i]<<endl;
	return mp(abs(j-i), r);
}
int main() {
	setIO("angry");
  	int n;
  	cin>>n;
  	for(int i=0; i<n; i++)
  	{
  		int N;
		cin>>N;
		v.pb(N);	
	}
	sort(all(v));
	int pos=0;
	pair<int,int> max=mp(0,0);
	//cout<<endl;
	for(int i=0; i<n; i++)
	{
		auto x=findF(i);
		if(max.f<=x.f)
		{
			if(x.f==max.first && x.s<max.s)
			continue;
			
			pos=v[i];
			max=x;
		}
	//cout<<x.f<<' '<<x.s<<endl;
	//	cout<<x<<endl;
	}
	cout<<max.f+1<<endl;
}

