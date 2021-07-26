#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, m, count = 0, i;
  int arr1[n], temp[100000] = 0, sumOfArr1 = 0, sumOfArr2 = 0;
  //input array
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }
  cin >> m;
  int arr2[m];
  for (int i = 0; i < m; i++)
  {
    cin >> arr2[i];
  }

  //logic part
  for (int i = n - 1; i >= 0; i--)
  {
    sumOfArr1 += arr1[i] * pow(10, count++);
  }
  count = 0;
  for (int i = m - 1; i >= 0; i--)
  {
    sumOfArr2 += arr2[i] * pow(10, count++);
  }
  int res = sumOfArr1 + sumOfArr2;
  int j = 0;
  while (res)
  {
    temp[j++] = res % 10;
    res = res / 10;
  }

  //print
  for (int k = j - 1; k >= 0; k--)
  {
    cout << temp[k] << ", ";
  }
  cout << "END";
}