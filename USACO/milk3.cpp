/*
	ID: theredh1
	LANG: C++
	PROG: milk3
*/
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int a, b, c, atop, btop, ctop;
int ans[22], vis[22][22]; 

void dfs(int x, int y) {
	if(vis[x][y]) return;
	vis[x][y] = 1;
	
	if(!x) ans[ctop - b]++;
	
	
	int cha, dao;
	{
		cha = btop - b;
		dao = min(a, cha);
		a -= dao;
		b += dao;
		dfs(a, b);
		a += dao;
		b -= dao;
		
	}
	{
		cha = atop - a;
		dao = min(b, cha);
		b -= dao;
		a += dao;
		dfs(a, b);
		b += dao;
		a -= dao;
		
	}
	{
		cha = ctop - c;
		dao = min(a, cha);
		a -= dao;
		c += dao;
		dfs(a, b);
		a += dao;
		c -= dao;
		
	}
	{
		cha = atop - a;
		dao = min(c, cha);
		c -= dao;
		a += dao;
		dfs(a, b);
		c += dao;
		a -= dao;
		
	}
	{
		cha = btop - b;
		dao = min(c, cha);
		c -= dao;
		b += dao;
		dfs(a, b);
		c += dao;
		b -= dao;
		
	}
	{
		cha = ctop - c;
		dao = min(b, cha);
		b -= dao;
		c += dao;
		dfs(a, b);
		b += dao;
		c -= dao;
		
	}
	return ;
}

int anss[30], tot;
int main() {
	
	freopen("milk3.in", "r", stdin);
	freopen("milk3.out", "w", stdout);
	
	cin >> atop >> btop >> ctop;
	c = ctop;
	
	dfs(a, b);
	
	for(int i = 0; i <= 20; i++) 
		if(ans[i]) anss[++tot] = i;
	for(int i = 1; i < tot; i++) cout << anss[i] << " ";
	cout << anss[tot]  << endl;
		
	return 0;
}
