#include <bits/stdc++.h>
using namespace std;


string run(string s1, string s2) {
// solution comes here
	int count=0;
	int countz=0;
	for(int i=0; i<s1.length(); i++)
	{
		count=count*(int(s1[i])-64);
	}
	for(int j=0; j<s2.length(); j++)
	{
		countz=countz*(int(s2[j])-64);
	}
	if(count%47==countz%47)
	return "GO";

	return "STAY";
}

int main(){
	cout<<run("COMETQ", "HVNGNAT");
}

