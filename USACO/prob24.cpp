#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi; 
typedef vector<pair<int,int>> vpi;
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
#define mp make_pair
#define pb push_back
void solve()
{
	
}
string bs( int n )
{
      char     bArray[ (sizeof( int) * 8) + 1 ];

      //index = 32 to fetch each 32 slots
      unsigned index  = sizeof( int ) * 8;

      char temp =0;
      bArray[ index ] = '\0';

      do{          
            temp = (n & 1); // Finding 0 or 1 in LSB
            temp = temp + '0';
            bArray[ --index ] = temp;
      }while (n >>= 1);
      return string( bArray + index );
}
int main() {
   string a, b; cin>>a>>b;
   int asc[a.length()];
   for(int i=0; i<a.length(); i++)
   {
   		asc[i]=int(a[i]);
   }
   string ols="";
   for(int i=0; i<a.length(); i++)
   {
   		ols+=bs(asc[i]);
   }
   vector<int> vs;
   for(int i=0; i<ols.length(); i++)
   {
   		int j=6;
   		string s="";
		while(j-- && i<ols.length())
   		{
   			s+=ols[i];
   			i++;
		}
		int nums=stoi(s, nullptr, 2);
		vs.pb(nums+8);
   }
	for(int i=0; i<vs.size(); i++)
	{
		cout<<b[vs[i]];
	}
}


