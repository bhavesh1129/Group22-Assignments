#include<bits/stdc++.h>

using namespace std;
int dp[31][31];
int check(int * a, int i, int j) {
  if (i > j)
    return 0;

  if (dp[i][j] != -1) return dp[i][j];

  return dp[i][j] = max(a[i] + min(check(a, i + 2, j), check(a, i + 1, j - 1)), a[j] + min(check(a, i, j - 2), check(a, i + 1, j - 1)));

}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < 31; i++) {
    for (int j = 0; j < 31; j++) {
      dp[i][j] = -1;
    }
  }
  cout << check(a, 0, n - 1);

  return 0;
}