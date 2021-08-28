#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int N, F; 
	cin>>N>>F; 
	int a[F], e[F];
	for(int i=0; i<F; i++)
		cin>>a[i]>>e[i];
	int B; cin>>B;
	//input
	bool visitedAisles[N+1]={0}; //set all booleans in array to false
	for(int i=0; i<F; i++)
	{
		int currentAisle=a[i], energy=e[i];
		while(currentAisle<=N && energy>0)
		{
			visitedAisles[currentAisle]=true;
			energy--;
			currentAisle++;
		}
	}
	int total=0; //total without giving an energy drink
	for(int i=1; i<=N; i++)
	{
		if(visitedAisles[i])
		total++;
	}
	int ans=0, maxPossible=0;
	for(int i=0; i<F; i++)
	{
		int extra=0;
		int currentAisle=a[i], energy=B+e[i];
		while(currentAisle<=N && energy>0)
		{
			if(visitedAisles[currentAisle]==false)
			extra++;
			
			energy--;
			currentAisle++;
		}
		if(total+extra>maxPossible)
		{
			maxPossible=total+extra;
			ans=i+1;
		}
	}
	cout<<ans<<endl;
}