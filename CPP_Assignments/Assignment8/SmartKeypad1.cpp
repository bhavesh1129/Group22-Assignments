#include<iostream>

using namespace std;
string a[] = {
  " ",
  ".+@$",
  "abc",
  "def",
  "ghi",
  "jkl",
  "mno",
  "pqrs",
  "tuv",
  "wxyz"
};
int c = 0;
void printt(string n, string a[], string S, int k) {
  if (k == n.length()) {

    cout << S << "\n";
    c++;
    return;
  }
  char r = n[k] - '0';
  string str = a[r];
  
  for (int i = 0; i < str.length(); i++) {
    char c = str[i];
    printt(n, a, S + c, k + 1);
  }

}

int main() {
  string s;

  cin >> s;
  printt(s, a, "", 0);
  return 0;
}