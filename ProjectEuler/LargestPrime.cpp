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
typedef unsigned long long ull;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
bool isPrime(ulli n)
{
	if (n == 2 || n == 3) return true;
    for (int i = 2; i * i < n; i ++) {
        if (n % i == 0) return false;
    }
    return true;
}
ll largestPrime(ulli n)
{
	ll prime = 2;
    while (n > 1) {
        while (n % prime == 0) {
            n /= prime;
        }
        if (n == 1) break;
        do {
           prime ++;
        } while (!isPrime(prime));
    }
    return prime;
		
}
int main() {
	ulli n=600851475143;
	cout<<largestPrime(n)<<endl;
}


