#include <iostream>
#include <fstream>
using namespace std;
 
char B[3][3];
 
// Does 1 cow win?
int cow_wins(char ch)
{
  // Check diagonals
  if (B[0][0] == ch && B[1][1] == ch && B[2][2] == ch) return 1;
  if (B[0][2] == ch && B[1][1] == ch && B[2][0] == ch) return 1;
 
  // Check rows and columns
  for (int i=0; i<3; i++) {
    if (B[0][i] == ch && B[1][i] == ch && B[2][i] == ch) return 1;
    if (B[i][0] == ch && B[i][1] == ch && B[i][2] == ch) return 1;
  }
  
  return 0; 
}
 
// Test if a team wins based on 3 characters in a row, column, or diagonal
bool check3(char ch1, char ch2, char a, char b, char c) 
{
  // All 3 characters have to be either ch1 or ch2
  if (a != ch1 && a != ch2) return false;
  if (b != ch1 && b != ch2) return false;
  if (c != ch1 && c != ch2) return false;
  
  // ch1 and ch2 have to appear at least once each
  if (a != ch1 && b != ch1 && c != ch1) return false;
  if (a != ch2 && b != ch2 && c != ch2) return false;
  
  return true;
}
 
// Does a team win?
int team_wins(char ch1, char ch2)
{
  // Check diagonals
  if (check3(ch1, ch2, B[0][0], B[1][1], B[2][2])) return 1;
  if (check3(ch1, ch2, B[0][2], B[1][1], B[2][0])) return 1;
 
  // Check rows and columns
  for (int i=0; i<3; i++) {
    if (check3(ch1, ch2, B[0][i], B[1][i], B[2][i])) return 1;
    if (check3(ch1, ch2, B[i][0], B[i][1], B[i][2])) return 1;
  }
  
  return 0; 
}
 
int main(void)
{
  //ifstream fin ("tttt.in");
  //ofstream fout ("tttt.out");
  
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      cin >> B[i][j];
 
  int answer1 = 0, answer2 = 0;
  for (char ch = 'A'; ch <= 'Z'; ch++) 
    answer1 += cow_wins(ch);
  for (char ch1 = 'A'; ch1 <= 'Z'; ch1++) 
    for (char ch2 = ch1+1; ch2 <= 'Z'; ch2++) 
      answer2 += team_wins(ch1, ch2);
 
  cout << answer1 << "\n" << answer2 << "\n";
  return 0;
}
