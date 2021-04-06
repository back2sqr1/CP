#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define SQ(a) ((a)*(a))
using namespace std;
ll DaysPassed(int month, int day, int year)
{
	int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	bool isLeap=false;
	int final=day;
	int months=month;
	for(int i=1900; i<year; i++)
	{
		if(i%100==0)
		{
			if(i%400==0)
			isLeap=true; 
			else
			isLeap=false; 
		}
		else if(i%4==0)
		{
			isLeap=true;
		}
		else
		isLeap=false;
		months+=12;
		isLeap? final+=366: final+=365;
		cout<<final<<' '<<months<<endl;
	}
	if(year%100==0)
		{
			if(year%400==0)
			isLeap=true; 
			else
			isLeap=false; 
		}
	else if(year%4==0)
		{
			isLeap=true;
		}
		isLeap? monthDays[1]==29: monthDays[1]==28;
	for(int i=0; i<month-1; i++)
	{
		final+=monthDays[i];
		cout<<final<<' '<<i <<endl;
	}
	return final;
	
}

int main() { 
	cout<<DaysPassed(8,1,2020);
}
