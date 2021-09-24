#include<iostream>

using namespace std;
int main() {
  int t;
  cin >> t;
  int k = 1;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    int a[n], b[n];
    a[0] = b[0] = 1;

    for (int i = 1; i <= n; i++) {
      a[i] = a[i - 1] + b[i - 1];
      b[i] = a[i - 1];
    }
    cout << "#" << k++ << " : " << a[n - 1] + b[n - 1] << "\n";
  }

  return 0;
}