#include <bits/stdc++.h> 
using namespace std; 
  
string getPalindrome(string str) { 
  
  unordered_map<char, int> hmap; 
  for (int i = 0; i < str.length(); i++) 
    hmap[str[i]]++; 

  int oddCount = 0; 
  char oddChar; 
  for (auto x : hmap) { 
    if (x.second % 2 != 0) { 
      oddCount++; 
      oddChar = x.first; 
    } 
  } 
  if (oddCount > 1 || oddCount == 1 &&  
                  str.length() % 2 == 0) 
    return "NO SOLUTION"; 
  string firstHalf = "", secondHalf = ""; 
  for (auto x : hmap) { 
    string s(x.second / 2, x.first); 
    firstHalf = firstHalf + s; 
    secondHalf = s + secondHalf; 
  } 

  return (oddCount == 1) ?  
         (firstHalf + oddChar + secondHalf) : 
         (firstHalf + secondHalf); 
} 
  
int main() { 
  string s;
  cin>>s; 
  cout << getPalindrome(s); 
  
} 
