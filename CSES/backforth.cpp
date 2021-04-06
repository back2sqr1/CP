/*
	ID: theredh1
	LANG: C++
	PROG: lineup
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
set<int> p;
vector<int> barn1, barn2;
int b1, b2;
void Fri(int total, vector<int> A, vector<int> B)
{
	for(int i=0; i<B.size(); i++)
	{
		int x=B[i];
		p.insert(total+x);
	}
}
void Thur(int total, vector<int> A, vector<int> B)
{
	for(int i=0; i<A.size(); i++)
	{
		int x=A[i];
		vector<int> j=A;
		j.erase(j.begin()+i);
		vector<int> y=B;
		y.pb(x);
		Fri(total-x, j, y);
	}
}
void Wed(int total, vector<int> A, vector<int> B)
{
	for(int i=0; i<B.size(); i++)
	{
		int x=B[i];
		vector<int> j=B;
		j.erase(j.begin()+i);
		vector<int> y=A;
		y.pb(x);
		Thur(total+x, y, j);
	}
}
void Tue(int total, vector<int> A, vector<int> B)
{
	for(int i=0; i<A.size(); i++)
	{
		int x=A[i];
		vector<int> j=A;
		j.erase(j.begin()+i);
		vector<int> y=B;
		y.pb(x);
		Wed(total-x, j, y);
	}
}
int main() {
    setIO("backforth");
	for(int i=0; i<10; i++)
	{
		int num;
		cin>>num;
		barn1.pb(num);
	}
	for(int i=0; i<10; i++)
	{
		int num;
		cin>>num;
		barn2.pb(num);
	}
	p.insert(1000);
	Tue(1000, barn1, barn2);
//	for(auto s: p)
//	{
//		cout<<s<<endl;
//	}
	cout<<p.size()<<endl;
}



