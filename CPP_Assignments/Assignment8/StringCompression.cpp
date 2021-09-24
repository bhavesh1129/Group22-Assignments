#include<iostream>

using namespace std;
int main() {

  string s;
  cin >> s;
  int j = 0;
  int i;
  int c = 1;
  for (i = 1; i < s.length(); i++) {
    if (s[i] == s[j]) {
      c++;
    } else {
      cout << s[j] << c;
      c = 1;
      j = i;
    }
  }
  if (i == s.length())
    cout << s[i - 1] << c;

  return 0;
}