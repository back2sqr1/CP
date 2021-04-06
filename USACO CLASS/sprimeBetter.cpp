/*
ID: theredh1
PROG: sprime
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <cmath>
using namespace std;

int prevSize, currSize = 4;
vector<int> prime;

bool checkPrime(int num)
{
	if (num <= 1 || num % 2 == 0) return false;
	if (num == 2 || num == 3 || num == 5 || num == 7) return true;
	for (int i = 3; i <= sqrt(num); i += 2)
		if (num % i == 0) return false;
	return true;
}

void addPrimes()
{
	for (int i = prevSize; i < currSize; i++) // cannot just use prime.size() because it is keep increasing
		for (int j = 1; j <= 9; j += 2)
		{
			int num = prime[i] * 10 + j; // only built upon prev. primes. No even numbers on any digit!
			if (checkPrime(num)) prime.push_back(num); cout << num << " ";
		}

	prevSize = currSize; currSize = prime.size(); // update for next time
}

int main()
{
	ifstream in("sprime.in");
	ofstream out("sprime.out");

	int n; in >> n;
	prime.push_back(2), prime.push_back(3), prime.push_back(5), prime.push_back(7); // push back 2, 3, 5, 7
	for (int i = 0; i < n - 1; i++)
		addPrimes();

	for (int i = 0; i < prime.size(); i++)
		if (prime[i] >= pow(10, n - 1) && prime[i] <= pow(10, n)) // just setting the bound...nothing complicated here.
			out << prime[i] << endl;

	return 0;
}
