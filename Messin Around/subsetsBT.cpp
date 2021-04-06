#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
void subsetsUtil(vector<int>& A, vector<vector<int> >& res, 
                 vector<int>& subset, int index) 
{ 
    res.push_back(subset); 
    for (int i = index; i < A.size(); i++) { 
  
        // include the A[i] in subset. 
        subset.push_back(A[i]); 
  
        // move onto the next element. 
        subsetsUtil(A, res, subset, i + 1); 
  
        // exclude the A[i] from subset and triggers 
        // backtracking. 
        subset.pop_back(); 
    } 
  
    return; 
} 
vector<vector<int>> Sub(vector<int>& A)
{
	vector<int> subset; 
    vector<vector<int> > res; 
    int index = 0; 
    subsetsUtil(A, res, subset, index); 
  
    return res; 
}
int main() { 
	vector<int> ex={9,3,2};
	vector<vector<int>> pos=Sub(ex);
	for(int i=0; i<pos.size(); i++){
		for(int j=0; j<pos[i].size(); j++)
			cout<<pos[i][j]<<' ';
	cout<<"\n";
}
}


