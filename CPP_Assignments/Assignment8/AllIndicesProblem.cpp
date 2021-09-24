#include<iostream>

using namespace std;

void find(int a[], int m, int n, int i) {
  if (i == n) {
    if (a[i] == m) {
      cout << i << " ";
    }
    return;
  }
  if (a[i] == m) {
    cout << i << " ";
  }

  find(a, m, n, i + 1);

}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  find(a, m, n - 1, 0);

  return 0;
}