
/*
	ID: theredh1
	LANG: C++
	PROG: socdist1
*/
#include <iostream>
#include <fstream>
using namespace std;
 
// Returns size of largest gap between two 1s and also the index where it starts
int find_largest_interior_gap(string s, int &gap_start)
{
  int biggest_gap = 0, current_start = -1, N = s.length();
  for (int i=0; i<N; i++) 
    if (s[i] == '1') {
      if (current_start!=-1 && i-current_start > biggest_gap) {
	biggest_gap = i-current_start;
	gap_start = current_start;
      }
      current_start = i;
    }
  return biggest_gap;
}
 
// Returns size of smallest gap between two 1s
int find_smallest_interior_gap(string s)
{
  int smallest_gap = 1000000000, current_start = -1, N = s.length();
  for (int i=0; i<N; i++) 
    if (s[i] == '1') {
      if (current_start!=-1 && i-current_start < smallest_gap) smallest_gap = i-current_start;
      current_start = i;
    }
  return smallest_gap;
}
 
int try_cow_in_largest_gap(string s)
{
  int gap_start, largest_gap = find_largest_interior_gap(s, gap_start);
  if (largest_gap >= 2) {
    s[gap_start + largest_gap / 2] = '1';
    return find_smallest_interior_gap(s);
  } 
  return -1; // no gap!
}
 
int main(void)
{
//  ifstream fin ("socdist1.in");
freopen("socdist1.in", "r", stdin);
		freopen("socdist1.out", "w", stdout);
  int N;
  string s, temp_s;
  cin >> N >> s;
//  ofstream fout ("socdist1.out");
  int answer = 0;
 
  // Possibility 1. put two cows in largest interior gap
  int gap_start, largest_gap = find_largest_interior_gap(s, gap_start);
  if (largest_gap >= 3) {
    temp_s = s;
    temp_s[gap_start + largest_gap / 3] = '1';
    temp_s[gap_start + largest_gap * 2 / 3] = '1';
    answer = max(answer, find_smallest_interior_gap(temp_s));
  }
 
  // Possibility 2. cows at both ends
  if (s[0] == '0' && s[N-1] == '0') {
    temp_s = s; temp_s[0] = temp_s[N-1] = '1';
    answer = max(answer, find_smallest_interior_gap(temp_s));        
  }
 
  // Possibility 3. cow at left + cow in largest interior gap
  if (s[0] == '0') {
    temp_s = s; temp_s[0] = '1';
    answer = max(answer, try_cow_in_largest_gap(temp_s));
  }
 
  // Possibility 4. cow at right + cow in largest interior gap
  if (s[N-1] == '0') {
    temp_s = s; temp_s[N-1] = '1';
    answer = max(answer, try_cow_in_largest_gap(temp_s));
  }
 
  // Possibility 5. cow at largest interior gap.  done twice.
  if (largest_gap >= 2) {
    temp_s = s; temp_s[gap_start + largest_gap / 2] = '1';
    answer = max(answer, try_cow_in_largest_gap(temp_s));
  }
 
  cout << answer << "\n";
  return 0;
}
