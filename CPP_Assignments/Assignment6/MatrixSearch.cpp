#include <iostream>
using namespace std;

bool matrix_search(int a[100][100], int n, int m, int x)
{
	int i = 0, j = m - 1;
	while (i < n && j >= 0)
	{
		if (a[i][j] == x)
		{
			return true;
		}
		else
		if (a[i][j] > x)
			j--;
		else
			i++;
	}

	return false;
}

int main()
{
	int n, m;
	cin >> n >> m;
	int a[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	int x;
	cin >> x;
	bool y = matrix_search(a, n, m, x);
	cout << y;
	return 0;
}