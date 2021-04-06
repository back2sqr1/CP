#include <iostream>
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
#define MAXN 100000
 
int N;
int A[MAXN];
 void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
int main()
{
	setIO("taming");
	cin >> N;
	for(int i=0;i<N;i++)
		cin >> A[i];
	if(A[0] > 0)
	{
		cout << -1 << '\n';
		return 0;
	}
	A[0] = 0;
	int t = -1;
	int req = 0;
	int pos = 0;
	for(int i=N-1;i>=0;i--)
	{
		if(t != -1 && A[i] != -1 && A[i] != t)
		{
			cout << -1 << '\n';
			return 0;
		}
		if(t == -1)
			t = A[i];
		if(A[i] == -1)
			A[i] = t;
		if(A[i] == 0)
			req++;
		if(A[i] == -1)
			pos++;
		if(t > -1)
			t--;
	}
	cout << req << ' ' << req+pos << '\n';
}
