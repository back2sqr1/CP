/*
	ID: theredh1
	LANG: C++
	PROG: 
*/
#define pb push_back
#define PB pop_back
#define MP make_pair
#define f first
#define s second
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void move(stack<int> &one, stack<int> &two) //moves top
{
	int num=one.top();
	one.pop();
	two.push(num);
}
void print(stack<int> one, stack<int> two, stack<int> three, int n)
{
	string out="", out1="", out2="", out3="";
	for(int i=0; i<n; i++)
	{
		if(one.empty())
		{
			out1='-'+out1;
		}	
		
		else{
			out1+='0'+one.top();
			one.pop();
		}	
	}
	out+=out1+"||";
	for(int i=0; i<n; i++)
	{
		if(two.empty())
		out2='-'+out2;
		
		else{
			out2+='0'+two.top();
			two.pop();
		}	
	}
	out+=out2+"||";
	for(int i=0; i<n; i++)
	{
		if(three.empty())
		out3='-'+out3;
		else{
			out3+='0'+three.top();
			three.pop();
		}	
	}
	out+=out3;
	cout<<out<<endl;
}
void Hanoi(stack<int> &tower1, stack<int> &tower2, stack<int> &tower3, int disk, stack<int> &source, stack<int> &aux, stack<int> &dest, int n)//start tower
{
	if(disk==1)
	{
		move(source, dest);
		print(tower1, tower2, tower3, n);
	}
	else
	{
		Hanoi(tower1, tower2, tower3, disk-1,source, dest, aux, n);
		move(source, dest);
		print(tower1, tower2, tower3, n);
		Hanoi(tower1, tower2, tower3, disk-1,aux, source, dest, n);
	}
	
}
int main() {
	int n;
	cin>>n;
	stack<int> tower1, tower2, tower3;
	int i=n;
	while(i>0)
	{
		tower1.push(i);
		i--;
	}
	print(tower1, tower2, tower3, n);
	Hanoi(tower1,tower2, tower3,tower1.size(), tower1, tower2, tower3, n);
}


