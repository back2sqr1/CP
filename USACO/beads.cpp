  
/*
ID: theredh1
PROG: beads
LANG: C++
*/

#include<cstdio>
using namespace std;

char necklace[351];
int len;

int count(int pos, int dir)
{
	int i, num=0;
	char check='w';

	if (dir == 1)
		i = pos;
	else
	{
		i = pos-1;
		if (i<0)
			i = len-1;
		if (i>=len)
			i = 0;
	}	

	do
	{
		if (check == 'w' && necklace[i] != 'w')
			check = necklace[i];
		num++;
		i = i+dir;
		if (i<0)
			i = len-1;
		if (i>=len)
			i = 0;
	}
	while ((check == 'w' || necklace[i] == check || necklace[i] == 'w') && num < len);

	return num;
}

int main()
{
	freopen("beads.in", "r", stdin);
	freopen("beads.out", "w", stdout);

	int max, num, i;

	scanf("%d", &len);
	scanf("%s", &necklace);

	max = 0;
	for (i=0; i<len; i++)
	{
		num = count(i, 1) + count(i, -1);
		if (num > max)
			max = num;
	}

	if (max > len)
		max = len;
	printf("%d\n", max);

	return 0;
}
