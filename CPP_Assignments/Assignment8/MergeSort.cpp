#include<iostream>

using namespace std;

void merge(int * a, int low, int mid, int right) {
  int s1 = mid - low + 1;
  int s2 = right - mid;

  int n1[s1];
  int n2[s2];

  for (int i = 0; i < s1; i++) {
    n1[i] = a[low + i];
  }

  for (int i = 0; i < s2; i++) {
    n2[i] = a[mid + 1 + i];
  }
  int i = 0, j = 0, k = low;
  while (i < s1 && j < s2) {
    if (n1[i] > n2[j]) {
      a[k++] = n2[j++];
    } else {
      a[k++] = n1[i++];
    }
  }
  while (i < s1) {
    a[k] = n1[i++];
    k++;
  }
  while (j < s2) {

    a[k] = n2[j++];
    k++;
  }
}

void sorting(int l, int r, int * a) {
  if (l < r) {
    int mid = (l + r) / 2;
    sorting(l, mid, a);
    sorting(mid + 1, r, a);
    merge(a, l, mid, r);
  }
}

int main() {

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sorting(0, n - 1, a);
  int j = 0;
  while (j < n) {
    cout << a[j++] << " ";
  }

  return 0;
}