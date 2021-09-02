#include <iostream>
using namespace std;

bool isValid(long long int ar[100], long long int n, long long int m, long long int ans)
{
	int student = 1;
	long long int currentpages = 0;
	for (long long int i = 0; i < n; i++)
	{
		if (ar[i] > ans)
		{
			return false;
		}

		if (currentpages + ar[i] > ans)
		{
			currentpages = ar[i];
			student++;
			if (student > m)
			{
				return false;
			}
		}
		else
		{
			currentpages = currentpages + ar[i];
		}
	}

	return true;
}

long long int maximumpages(long long int ar[100], long long int n, long long int m)
{
	int start = 0;
	long long int sum = 0;
	long long int end;
	for (int i = 0; i < n; i++)
	{
		sum = sum + ar[i];
	}

	end = sum;
	long long int finalans = 0;
	while (start <= end)
	{
		long long int mid = (start + end) / 2;
		if (isValid(ar, n, m, mid))
		{
			end = mid - 1;
			finalans = mid;
		}
		else
		{
			start = mid + 1;
		}
	}

	return finalans;
}

int main()
{
	int t;
	cin >> t;
	long long int n, m;
	long long int ar[100];
	int k = 1;
	while (k <= t)
	{
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}

		long long int y = maximumpages(ar, n, m);
		cout << y << endl;
		k++;
	}
	return 0;
}