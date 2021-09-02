#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0, k, i;
	for (i = 0; i < n; i++)
	{
		cin >> k;
		ans = ans ^ k;
	}

	cout << ans << endl;
	return 0;
}