#include<iostream>

using namespace std;
int main() {

  string s;
  cin >> s;
  int i;
  for (i = 0; i < s.length() - 1; i++) {
    if (s[i] == s[i + 1]) {
      cout << s[i] << "*";
    } else
      cout << s[i];
  }
  cout << s[i];
  return 0;
}