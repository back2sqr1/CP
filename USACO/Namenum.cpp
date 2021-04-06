/*
ID: theredh1
PROG: namenum
LANG: C++
*/
#define pb push_back
#define PB pop_back
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

using namespace std;

//setup mapping
map<char, char> mp;


int main() {
  // init mapping
  mp['A'] = mp['B'] = mp['C'] = '2';
  mp['D'] = mp['E'] = mp['F'] = '3';
  mp['G'] = mp['H'] = mp['I'] = '4';
  mp['J'] = mp['K'] = mp['L'] = '5';
  mp['M'] = mp['N'] = mp['O'] = '6';
  mp['P'] = mp['R'] = mp['S'] = '7';
  mp['T'] = mp['U'] = mp['V'] = '8';
  mp['W'] = mp['X'] = mp['Y'] = '9';
  
  // input
  string digits;
  freopen("namenum.in", "r", stdin);
freopen("namenum.out", "w", stdout);
  ifstream dictin("dict.txt");
  cin >> digits;

  string dictword;
  bool has_one_valid = false;
  // for each word in dict
  while (dictin >> dictword) 
  {
    if (dictword.size() != digits.size()) continue;
    // check if it is valid
    bool valid = true;
    for (int i = 0; i < dictword.size(); i ++)
    {
      if (mp[dictword[i]] != digits[i])
      {
        valid = false;
        break;
      }
}
    if (valid) 
    {
      has_one_valid = true;
      cout << dictword << endl;
    }
  }

  // output answer
  if (!has_one_valid)
  {
    cout << "NONE" << endl;
  }
  return 0;
}
