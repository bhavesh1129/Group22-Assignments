#include <bits/stdc++.h>

using namespace std;
char temp;
set < string > s;
void permutations(string str, int i) {
  if (str[i] == '\0') {
    s.insert(str);
    return;
  }
  for (int j = i; str[j] != '\0'; j++) {
    swap(str[i], str[j]);
    permutations(str, i + 1);
    swap(str[i], str[j]);
  }
}

int main() {
  string str;
  cin >> str;
  string temp;
  temp = str;
  permutations(str, 0);
  set < string > ::iterator itr = s.begin();
  while (itr != s.end()) {
    if ( * itr > temp) {
      cout << * itr << endl;
    }
    itr++;
  }

  return 0;
}