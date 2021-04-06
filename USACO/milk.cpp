/*
	ID: theredh1
	LANG: C++
	PROG: milk2
*/
#include<cstdio>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
	freopen("milk2.in", "r", stdin);
	freopen("milk2.out", "w", stdout);

	int currStart, minStart, n, start, end, maxmilk, maxstop, endMilk, stop;
	pair <int, int> times[5001];

	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{	
		scanf("%d%d", &start, &end);
		times[i] = make_pair(start, end);
	}

	sort(times, times+n);

	currStart=1; minStart=0;
	maxmilk = times[0].second - times[0].first;
	maxstop = 0; endMilk = times[minStart].second;
	while (currStart<n)
	{
		if (times[currStart].first <= endMilk)
			endMilk = max(times[currStart].second, endMilk);
		else
		{
			stop = times[currStart].first - endMilk;
			if (stop > maxstop)
				maxstop = stop;

			if (endMilk - times[minStart].first > maxmilk)
				maxmilk = endMilk - times[minStart].first;
			minStart = currStart;
			endMilk = times[minStart].second;
		}
		currStart++;
	}
	
	printf("%d %d\n", maxmilk, maxstop);
	
	return 0;
}
