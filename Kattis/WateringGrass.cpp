#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
using namespace std;
//no solved 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
typedef long long ll; 
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define F1R(i,a) FOR(i,1,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define pb push_back
int n;
const int maxx=1e4+10;
double l,w;
double v,r;
struct node{
	double l;
	double r;
}p[maxx];
int cmp(const node &a,const node &b)
{
	return a.l<b.l;
}

int main()
{
	while(~scanf("%d%lf%lf",&n,&l,&w))
	{
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lf%lf",&v,&r);
			if(w/2>=r) continue;
			p[cnt].l=v-sqrt(r*r-w*w/4.0);
			p[cnt++].r=v+sqrt(r*r-w*w/4.0);
		}
		sort(p,p+cnt,cmp);
//		for(int i=0; i<cnt; i++)
//		{
//			cout<<p[i].l<<' '<<p[i].r<<endl;
//		}
		int ans=0;
		double left=0,right=0;
		int flag=0;
		if(p[0].l<=0)
		{
			int i=0;
			while(i<cnt)
			{
				int j=i;
				while(j<cnt&&left>=p[j].l)
				{
					if(p[j].r>right)
					right=p[j].r;
					++j;
				}
				if(j==i) break;
				++ans;
				left=right;
				i=j;
				if(left>=l)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag) printf("%d\n",ans);
		else printf("-1\n");
	}
}
