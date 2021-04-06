#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int N;
vector<int> edges[100000];
int d[100000];
int A[100000];
int s0,s1,n0,n1;
 
void dfs(int i,int depth,int par)
{
	d[i] = depth;
	for(int j=0;j<edges[i].size();j++)
		if(edges[i][j]!=par)
			dfs(edges[i][j],depth+1,i);
}
 
int main()
{
	freopen("clocktree.in","r",stdin);
	freopen("clocktree.out","w",stdout);
	int a,b;
	cin >> N;
	for(int i=0;i<N;i++)
		cin >> A[i];
	for(int i=1;i<N;i++)
	{
		cin >> a >> b;
		a--,b--;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	dfs(0,0,-1);
	for(int i=0;i<N;i++)
	{
		if(d[i]%2) s1 += A[i], n1++;
		else s0 += A[i], n0++;
	}
	if((s0%12) == (s1%12))
		cout << N << '\n';
	else if((s0+1)%12 == (s1%12))
		cout << n1 << '\n';
	else if((s0%12) == ((s1+1)%12))
		cout << n0 << '\n';
	else
		cout << 0 << '\n';
	return 0;
}
