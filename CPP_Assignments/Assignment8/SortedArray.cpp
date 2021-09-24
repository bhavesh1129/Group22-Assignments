#include<iostream>

using namespace std;

bool check(int a[], int i) {
  if (i == 1) return true;

  if (a[i] >= a[i - 1] && check(a, i - 1))
    return true;

  return false;
}

int main() {

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (check(a, n))
    cout << "true";
  else
    cout << "false";

  return 0;
}