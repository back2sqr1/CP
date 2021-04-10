#include <iostream>
#include <cstring>
#pragma GCC optimize(3 , "Ofast" , "inline")
using namespace std;
int vis[22200] ;
typedef long long ll ;
int main()
{
	string s ;
	cin >> s ;
	int len = s.size() ;
	ll ans = 0 ;
	for(int i = 0 ;i < len ; i ++)
	 {
	    int k = 1 ;
	    memset(vis , 0 , sizeof vis) ;
	    for(int j = i + 1 ;j < len && k <= 26 ;j ++)
	     {
	     	if(s[j] == s[i]) break ;
	     	if(vis[s[j]] == 0)
	     	vis[s[j]] = 1 ,	ans ++ , k ++ ;
		 }
	 }
	 printf("%lld\n" , ans) ;
	return 0 ;
} 

