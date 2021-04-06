/*
	ID: theredh1
	LANG: C++
	PROG: barn1
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
	ifstream fin("barn1.in");
	ofstream fout("barn1.out");
	int maxBoards, numStalls, numCows;
	fin >> maxBoards >> numStalls >> numCows;
	int* occupiedStalls = (int*) calloc(numCows, sizeof(int));

	for (int i = 0; i < numCows; i++) {
		fin >> occupiedStalls[i];
	}

	sort(occupiedStalls, occupiedStalls + numCows);
	int* gaps = (int*) calloc(numCows - 1, sizeof(int));

	for (int i = 0; i < numCows - 1; i++) {
		gaps[i] = occupiedStalls[i + 1] - occupiedStalls[i] - 1;
	}

	sort(gaps, gaps + numCows - 1);
	int toBeUncovered = 0;

	for (int i = numCows - 2, j = 0; i >= 0 && j < maxBoards - 1; i--, j++) {
		toBeUncovered += gaps[i];
	}

	fout << occupiedStalls[numCows - 1] - occupiedStalls[0] + 1 - toBeUncovered << endl;

	return 0;
}


