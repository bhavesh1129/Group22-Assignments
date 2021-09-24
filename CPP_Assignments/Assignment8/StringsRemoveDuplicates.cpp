#include <bits/stdc++.h>

using namespace std;
int main() {

  string s;
  cin >> s;
  string a = "";
  int i, j = 0;
  for (i = 0; i < s.length() - 1; i++) {
    if (s[i] != s[i + 1]) {
      a += s[i];
    }

  }
  a += s[i];
  cout << a;
  return 0;
}