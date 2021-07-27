#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector < int > arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int target;
  cin >> target;
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++) {
    int temp = target - arr[i];
    int start = i + 1;
    int end = n - 1;
    while (start < end) {
      if (arr[start] + arr[end] > temp)
        end--;
      else if (arr[start] + arr[end] < temp)
        start++;
      else {
        cout << arr[i] << ", " << arr[start] << " and " << arr[end] << endl;
        start++;
        end--;
      }
    }
  }
  return 0;
}