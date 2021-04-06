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


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin>>s; 
    for(int i=-26; i<=26; i++)
    {
    	string a=s;
	    for(int j=0; j<s.length(); j++)
	    {
			a[j]=(a[j]-i)%26; 	
		}
		cout<<a<<endl;
	}
}

