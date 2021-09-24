#include<bits/stdc++.h>

using namespace std;
char values[][27] = {
  "",
  "A",
  "B",
  "C",
  "D",
  "E",
  "F",
  "G",
  "H",
  "I",
  "J",
  "K",
  "L",
  "M",
  "N",
  "O",
  "P",
  "Q",
  "R",
  "S",
  "T",
  "U",
  "V",
  "W",
  "X",
  "Y",
  "Z"
};
// int a[]=
void change(string str, string S, int c) {
  int s = str.length();
  if (c == s) {
    cout << S << endl;
    return;
  }

  if (str[c] != '0') {
    int num = str[c] - '0';
    string ch = values[num];
    change(str, S + ch, c + 1);
  }

  if (c < s - 1) {
    int n1 = str[c] - '0';
    int n3 = str[c + 1] - '0';
    int n4 = (n1 * 10) + (n3);
    if (n4 <= 26) {
      string ch1 = values[n4];
      change(str, S + ch1, c + 2);
    }
  }

}
int main() {

  string s;
  cin >> s;
  change(s, "", 0);
}