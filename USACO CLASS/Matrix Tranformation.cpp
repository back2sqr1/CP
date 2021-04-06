#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
struct multiArray
{
	int arr[10][10];
};
 multiArray ninety(multiArray ar)
{
	multiArray after;
		for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
		{
			after.arr[j][9-i]=ar.arr[i][j];
		}
		return after;
}
	multiArray twoseventy(multiArray ar)
	{
		return ninety(ninety(ninety(ar)));
	}
int main() { 
	multiArray ar;
	cout<<"ORIGINAL"<<endl;
	for(int i=0; i<10; i++)
	{
	for(int j=0; j<10; j++)
	{
		ar.arr[i][j]=rand()%2;
		cout<<ar.arr[i][j]<<' ';
	}
	cout<<endl;
	}
	
	cout<<endl;
	cout<<"90 DEGREES"<<endl;
		multiArray after= ninety(ar);
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			cout<<after.arr[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"270 DEGREES"<<endl;
	multiArray after2= twoseventy(ar);
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			cout<<after2.arr[i][j]<<' ';
		}
		cout<<endl;
	}
} 
