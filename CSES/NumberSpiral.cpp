#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll findCorner(ll y)
{
		if(y%2==0)
		{
			return y*y-y+1;
		}
		else{
			return y*y-y+1;
	}
}
int main() { 
	ll t; 
	cin>>t;		
	int i;
	ll ys[t];
	ll xs[t];
	for(i=0; i<t; i++)
	{
		cin>>ys[i];
		cin>>xs[i];
	}
	for(i=0; i<t; i++)
	{
		if(ys[i]==1 && xs[i]==1)
		{
			cout<<1<<endl;
			continue;
		}
		if(ys[i]%2==0)
		{
			if(xs[i]<=ys[i])
			{
				cout<<ys[i]*ys[i]-xs[i]+1<<endl;
			}
			else
			{
				if(xs[i]%2==1)
				cout<<findCorner(xs[i])+xs[i]-ys[i]<<endl;
				else
				cout<<findCorner(xs[i])+ys[i]-xs[i]<<endl;
			}
		}
		else{
			if(xs[i]<=ys[i])
			{
				cout<<(ys[i]-1)*(ys[i]-1)+xs[i]<<endl;
			}
			else{
				if(xs[i]%2==0)
				cout<<findCorner(xs[i])+ys[i]-xs[i]<<endl;
				else
				cout<<findCorner(xs[i])+xs[i]-ys[i]<<endl;
			}
		}
	}
	
}
