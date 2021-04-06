#include <iostream>
using namespace std;
int n;
long long int p[1024];


int main() {
    cin >> n;
  
    int s = n*(n+1);
    if (s % 4!=0) {
        cout << 0 << endl;
        return 0;
    }
    s /= 4;
    
    int i, j;
    p [0] = 1;
    for (i = 1; i <= n; i++)
        for (j = s; j >= i; j--) 
            p[j] += p[j-i];
    cout << (p[s]/2) << endl;
    return 0;
}
