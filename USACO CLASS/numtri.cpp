/*
	ID: theredh1
	LANG: C++
	PROG: numtri
*/
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int n, maxAns;
vector< vector<int> > tri;

int main()
{
	ifstream in("numtri.in");
	ofstream out("numtri.out");

	in >> n;
	tri.assign(n, vector<int>(0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			int input; in >> input;
			tri[i].push_back(input);
		}
	}

	for (int i = n - 2; i >= 0; i--)
		for (int j = 0; j < i + 1; j++)
			tri[i][j] += max(tri[i + 1][j], tri[i + 1][j + 1]);

	out << tri[0][0] << endl;

	return 0;
}


