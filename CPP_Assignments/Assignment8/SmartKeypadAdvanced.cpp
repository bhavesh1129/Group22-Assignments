#include<iostream>

using namespace std;
string searchIn[] = {
  "prateek",
  "sneha",
  "deepak",
  "arnav",
  "shikha",
  "palak",
  "utkarsh",
  "divyam",
  "vidhi",
  "sparsh",
  "akku"
};
string strings[] = {
  "",
  "",
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

    for (int l = 0; l < 11; l++) {
      int found = searchIn[l].find(S);
      if (found != -1) {
        cout << searchIn[l] << endl;
      }

    }
    return;
  }
  char r = n[k] - '0';
  string str = strings[r];

  // cout<<str;
  for (int i = 0; i < str.length(); i++) {
    char c = str[i];
    printt(n, a, S + c, k + 1);
  }

}

int main() {
  string s;

  cin >> s;
  printt(s, strings, "", 0);
  // cout<<"\n"<< c;
  return 0;
}