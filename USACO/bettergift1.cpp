/*
ID: yyjoyce1
PROG: gift1
LANG: C++
*/

#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	freopen("gift1.in", "r", stdin);
	freopen("gift1.out", "w", stdout);

	int NP, i, j, value[11], friends, gift, money, leftover;
	string name[11], person, recipient;

	memset(value, 0, sizeof(value));

	cin >> NP;
	for (i=0; i<NP; i++)
		cin >> name[i];

	for (i=0; i<NP; i++)
	{
		cin >> person;
		for (j=0; j<NP; j++)
		{
			if (person == name[j])
			{
				cin >> money >> friends;
				if (friends == 0)
					break;
				gift = money / friends;
				value[j] = value[j] - (gift * friends);
				break;
			}
		}

		while (friends)
		{
			cin >> recipient;
			for (j=0; j<NP; j++)
			{
				if (recipient == name[j])
				{
					value[j] += gift;
					break;
				}
			}
			friends--;
		}
	}

	for (i=0; i<NP; i++)
		cout << name[i] << ' ' << value[i] << endl;

	return 0;
}
