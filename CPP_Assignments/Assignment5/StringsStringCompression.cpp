#include<iostream>
#include<cstring>
using namespace std;

void compress(char * str, int len, int act);
char str[1000];
int length;

int main() {
  cin >> str;
  length = strlen(str);
  compress(str, 0, 0);
  cout << str;

}

void compress(char * str, int len, int act) {

  if (len < length) {
    int k = len;
    int count = 0;
    int c, n;
    while (len < length && str[k] == str[len]) {
      len++;
      count++;
    }
    n = 0;
    c = count;
    do {
      c /= 10;
      n++;
    } while (c != 0);

    str[act] = str[k];
    if (count == 1) {
      compress(str, len, act + 1);
    } else {
      for (c = 0; c < n; c++) {
        str[act + n - c] = (count % 10) + 48;
        count = count / 10;
      }
      compress(str, len, act + n + 1);
    }
  } else
    str[act] = '\0';
  return;
}