#include <iostream>
using namespace std;

int main()
{
	int n, res1;
	res1 = 0;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		res1 = res1 ^ arr[i];
	}

	int i = 0;
	int temp = res1;
	while (temp > 0)
	{
		if (temp & 1)
			break;
		i++;
		temp = temp >> 1;
	}

	int mask = (1 << i);
	int res2 = 0;
	for (int i = 0; i < n; i++)
	{
		if ((mask &arr[i]) != 0)
			res2 = res2 ^ arr[i];
	}

	int nextnum = res1 ^ res2;
	if (nextnum > res2)
		cout << res2 << " " << nextnum;
	else
		cout << nextnum << " " << res2;
	return 0;
}