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
set<char> s;
bool check(vector<char> v)
{
	for(int i=0; i<2; i++)
	{
	//	cout<<v[i]<<' ';
		if(v[i]!=v[i+1])
		return false;
	}
	return true;
}
int hor(vector<vector<char>> v)
{
	int ans=0;
	for(int i=0; i<3; i++)
	{
		bool go=true;
		for(int j=0; j<2; j++)
		{
			if(v[j][i]!=v[j+1][i])
			{
				go=false;
				break;
			}
		}
		if(go)
		s.insert(v[0][i]);
	}
	return ans;
}
int main(void)
{
	setIO("tttt");
	vector<vector<char>> v(3);
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			char a;
			cin>>a;
			v[i].pb(a);		
		}
	}
	int ans=0;
	if(v[0][0]==v[1][1] && v[1][1]==v[2][2])
	s.insert(v[0][0]);
	if(v[2][0]==v[1][1] && v[1][1]==v[0][2])
	s.insert(v[2][0]);
	//cout<<ans<<endl;
	for(int i=0; i<3; i++)
	{
		if(check(v[i]))
		s.insert(v[i][0]);
		//cout<<endl;
	}
	//cout<<ans<<endl;
	ans+=hor(v);
	cout<<s.size()<<endl;
	set<pair<char, char>> map;
	for(int i=0; i<3; i++)
	{
		set<char> s, s2;
		for(int j=0; j<3; j++)
		{
			s.insert(v[i][j]);
			s2.insert(v[j][i]);
			//cout<<v[j][i]<<' ';	
		}
		//cout<<endl;
		if(s.size()==2)
		{
			pair<char,char> p;
			auto x=s.begin();
			p.f=*x;
			x++;
			p.s=*x;
			map.insert(p);
		}
		if(s2.size()==2)
		{
			pair<char,char> p;
			auto x=s2.begin();
			p.f=*x;
			x++;
			p.s=*x;
			map.insert(p);
		}
	}
	set<char> diag1, diag2;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(i==j)
			diag1.insert(v[i][j]);
			if(i+j==2)
			diag2.insert(v[i][j]);
		}
	}
//	for(auto s: diag1)
//	cout<<s<<' ';
//	cout<<endl;
//	for(auto s:diag2)
//	cout<<s<<' ';
//	cout<<endl;
	if(diag1.size()==2)
	{
		auto x=diag1.begin();
		char a=*x;
		x++;
		char b=*x;
		//if(map.find(mp(a,b))==map.end())
		map.insert(mp(a,b));
	}
	if(diag2.size()==2)
	{
		auto x=diag2.begin();
		char a=*x;
		x++;
		char b=*x;
		//if(map.find(mp(a,b))==map.end())
		map.insert(mp(a,b));
	}
	cout<<map.size()<<endl;
}

