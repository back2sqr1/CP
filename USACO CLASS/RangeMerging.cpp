/*
	ID: theredh1
	LANG: C++
	PROG: 
*/
#define PB push_back
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
	int i=0;
	vector<int> start;
	vector<int> end;
	for(int i=0; i<10; i++)
	{
		int x,y;
		cin>>x>>y;
		start.PB(x);
		end.PB(y);
	}
	int m=0;
	for(int k=0; k<2; k++)
	for(int i=0; i<end.size(); i++)
	for(int j=0; j<end.size(); j++)
	{
		if(i==j)
		{
			continue;
		}
		cout<<start[i]<<' '<<end[i]<<' '<<start[j]<<' '<<end[j]<<endl;
		if(end[j]==end[i])
		{
			if(start[i]>start[j])
			start[i]=start[j];
			
			start.erase(start.begin()+j);
			end.erase(end.begin()+j);	
		}
		else if(end[j]>end[i])
		{
			if(start[i]>=start[j])
			{
				start[i]=start[j];
				end[i]=end[j];
				start.erase(start.begin()+j);
				end.erase(end.begin()+j);
			}
			else
			{
				if(start[j]<=end[i])
				{
					end[i]=end[j];
					start.erase(start.begin()+j);
					end.erase(end.begin()+j);
				}
			}
		}
		else
		{
			if(start[j]<=start[i])
			{
				if(end[j]>start[i])
				{
					start[i]=start[j];
					start.erase(start.begin()+j);
					end.erase(end.begin()+j);
				}
			}
			else
			{
				start.erase(start.begin()+j);
				end.erase(end.begin()+j);
			}
		}

	}
	for(int i=0; i<start.size(); i++)
	{
		cout<<start[i]<<','<<end[i]<<' ';
	}
		cout<<endl;
}


