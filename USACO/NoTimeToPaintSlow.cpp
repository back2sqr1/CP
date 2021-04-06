#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
const int MAX_N = 100000;
  
string S;
int N, prefix_sol[MAX_N+1], suffix_sol[MAX_N+1];
    
void build_sol(int *sol)
{
  stack<char> active_colors;
  for (int i=0; i<N; i++) {
    sol[i+1] = sol[i];
    while (!active_colors.empty() && active_colors.top() > S[i]) active_colors.pop();
    if (active_colors.empty() || active_colors.top() < S[i]) { active_colors.push(S[i]); sol[i+1]++; }
  }
}
     
int main(void)
{
  int Q, i, j;
  cin >> N >> Q >> S;
  build_sol(prefix_sol);
  reverse (S.begin(), S.end());
  build_sol(suffix_sol);
//  for(int i=0; i<=N; i++)
//   cout<<prefix_sol[i]<<' ';
//   cout<<endl;
//   for(int i=0; i<=N; i++)
//   cout<<suffix_sol[i]<<' ';
//   cout<<endl;
  for (int q=0; q<Q; q++) {
    cin >> i >> j;
    cout << prefix_sol[i-1] + suffix_sol[N-j] << "\n";
  }
}
