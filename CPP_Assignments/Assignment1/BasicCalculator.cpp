#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  char ch;

  cin >> ch;
  while (ch != 'x' && ch != 'X') {
    if (ch == '+') {
      cin >> a >> b;
      c = a + b;
      cout << c << endl;
    } else if (ch == '-') {
      cin >> a >> b;
      c = a - b;
      cout << c << endl;
    } else if (ch == '*') {
      cin >> a >> b;
      c = a * b;
      cout << c << endl;
    } else if (ch == '%') {
      cin >> a >> b;
      c = a % b;
      cout << c << endl;
    } else if (ch == '/') {
      cin >> a >> b;
      c = a / b;
      cout << c << endl;
    } else
      cout << "Invalid operation. Try again." << endl;
    cin >> ch;
  }
}