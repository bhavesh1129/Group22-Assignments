#include <iostream>
using namespace std;

int power(int no, int p)
{
	if (p == 0)
	{
		return 1;
	}
	else
	{
		return no* power(no, p - 1);
	}
}

int powerlog(int n, int p)
{
	int ans = 1;
	while (p)
	{
		if (p & 1)
			ans *= n;
		n = n * n;
		p = p >> 1;
	}

	return ans;
}

int main()
{
	int n, p;
	cin >> n >> p;
	cout << powerlog(n, p);
	return 0;
}