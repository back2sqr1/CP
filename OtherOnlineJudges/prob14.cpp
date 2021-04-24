#include <bits/stdc++.h>
using namespace std;
 
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
#define M 1e9+7
void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".txt").c_str(), "r", stdin); 
        freopen((name+"-23.txt").c_str(), "w", stdout);
    }
}
char ceasar(char ch, int key, int choice)
{
   if (choice==0){ //for encryption{
         if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if (ch > 'Z'){
               ch = ch - 'Z' + 'A' - 1;
            }
        }
   }
   else if (choice == 1) { //for decryption
         if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') {
               ch = ch + 'Z' - 'A' + 1;
            }
         }
      }
   return ch;
}
void solve(){
	string first, second, third;
	getline(cin, first);
	getline(cin,second);
	getline(cin, third);
	vi v1, v2;
	for(int i=0; i<second.length(); i++)
	{
		if(second[i]==' ')
		continue;
		
		string x;
		while(second[i]!=' ')
		{
			x+=second[i];
			i++;
		}
		v1.pb(stoi(x));
	}for(int i=0; i<third.length(); i++)
	{
		if(third[i]==' ')
		continue;
		
		int x= (third[i]-'0');
		v2.pb(x);
	}
	int a=0, b=0, c=0;
	string ans="";

	while(c<first.length())
	{
		if(!(first[c]>= 'A' && first[c] <= 'Z'))
		{
			ans+=first[c];
			c++;
			continue;
		}
		ans+=tolower(ceasar(first[c], v1[a%v1.size()],v2[b%v2.size()]));
		a++;
		b++;
		c++;
	}
	cout<<ans<<endl;
}
int main() {
    FIO;
	int t; cin>>t;
	string dummy;
	getline(cin, dummy);
	while(t--)
	{
		solve();
	}
}

