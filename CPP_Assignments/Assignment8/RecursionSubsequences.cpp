#include<iostream>

using namespace std;
int c = 0;
void subseq(string s, int i, int n, string S) {
  if (i == n) {
    cout << S << " ";
    c++;
    return;
  }
  subseq(s, i + 1, n, S);
  subseq(s, i + 1, n, S + s[i]);

}

int main() {
  string s;
  cin >> s;
  subseq(s, 0, s.length(), "");

  cout << "\n" << c;

  return 0;
}