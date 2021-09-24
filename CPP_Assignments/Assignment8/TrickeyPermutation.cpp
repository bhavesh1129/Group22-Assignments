#include <bits/stdc++.h>

using namespace std;

string ans[100000];

int c = 0;
void permutationn(string a, int i) {
  if (i == a.length()) {
    ans[c++] = a;
    return;
  }

  for (int j = i; j < a.length(); j++) {

    swap(a[i], a[j]);
    permutationn(a, i + 1);
    swap(a[i], a[j]);

  }

}

int main() {
  string a;
  cin >> a;

  permutationn(a, 0);

  sort(ans, ans + c);

  string temp = "";
  for (int i = 0; i < c; i++) {
    if (temp != ans[i])
      cout << ans[i] << endl;
    temp = ans[i];
  }

  return 0;
}