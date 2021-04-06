/*
	ID: theredh1
	LANG: C++
	PROG: 
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll fib(ll n) 
{ 
      
    ll f[n + 2];  
    ll i; 
    f[0] = 0; 
    f[1] = 1; 
  
    for(i = 2; i <= n; i++) 
    { 
       f[i] = f[i - 1] + f[i - 2]; 
    } 
    return f[n]; 
    
}
int main() {
	ll i=1, sum=0;
	while(fib(i)<=4000000)
	{	
		if(fib(i)%2==0)
		sum+=fib(i);	
		i++;	
	}
	cout<<sum<<endl;
}


