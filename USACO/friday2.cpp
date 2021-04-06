/*
	ID: theredh1
	LANG: C++
	PROG: friday
*/
#define PB push_back
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() { 
	freopen("friday.in", "r", stdin);
	freopen("friday.out", "w", stdout);
	vector<int> daysOfWeek={0,0,0,0,0,0,0};
	int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	ll n;
	cin>>n;
	bool isLeap=false;
	int day=1, month=0;
	for(int j=1900; j<1900+n; j++)
	for(int m=0; m<12; m++)
	{
		if(day-2>=0)
		daysOfWeek[day-2]++;
		else 
		daysOfWeek[day+5]++;
		
		if(j%100==0)
		{
			if(j%400==0)
			isLeap=true; 
			else
			isLeap=false; 
		}
		else if(j%4==0)
		{
			isLeap=true;
		}
		else
		isLeap=false;
		
		isLeap? monthDays[1]=29 : monthDays[1]=28;
		day+=monthDays[m]%7;
		if(day>=7)
		{
			day-=7;
		}
		
	}

	cout<<daysOfWeek[6]<<' ';
	for(int i=0; i<daysOfWeek.size()-2; i++)
	{
		cout<<daysOfWeek[i]<<' ';
	}
	cout<<daysOfWeek[5]<<endl;
}


