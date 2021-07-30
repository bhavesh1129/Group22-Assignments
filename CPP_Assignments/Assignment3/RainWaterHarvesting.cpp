#include <bits/stdc++.h>
using namespace std;

//logic part
int findWater(int arr[], int n)
{
    int left[n];
    int right[n];
    int res = 0;
    left[0] = arr[0];

    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);
    right[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);

    for (int i = 0; i < n; i++)
        res += min(left[i], right[i]) - arr[i];

    return res;
}
int main()
{
    //input array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findWater(arr, n);
    return 0;
}