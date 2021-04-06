#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair

void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); cin.tie(0); 
   
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
} 
int main() {
    //setIO("gymnastics");
	cout<<"Random numbers generated between 0 and 1:"<<endl;
    srand( (unsigned)time( NULL ) );
    int n;
    cin>>n;
 	double m=0, total=0;
    for (int i = 0; i < n; i++) 
    {
    	double a=(double) rand()/RAND_MAX, b=(double) rand()/RAND_MAX;
     	double c=(double) rand()/RAND_MAX, d=(double) rand()/RAND_MAX;
	    //cout <<a << ' '<<b << endl;
        double distance=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        cout<<distance<<endl;
		if(distance<1)
        {
        	m+=distance;
		}
		total+=distance;
    }
    cout<<endl;
    cout<<m*4<<endl;
    cout<<total<<endl;
    cout<<m*4/total<<endl;
    return 0;
}


