#include<iostream>

using namespace std;
string xString = "";
string domain = "";
void moveXatEnd(string str, int len) {
  // base case
  if (len == str.length())
    return;

  // recursive case
  if (str[len] == 'x')
    xString += 'x';
  else
    domain += str[len];
  moveXatEnd(str, len + 1);
}
int main() {
  string str;
  cin >> str;
  moveXatEnd(str, 0);
  cout << domain + xString;
  return 0;
}