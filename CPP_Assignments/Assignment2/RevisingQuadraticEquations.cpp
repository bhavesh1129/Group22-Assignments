#include<iostream>
#include<math.h>

using namespace std;
int main() {
  long int a;
  long int b;
  long int c;
  cin >> a;
  cin >> b;
  cin >> c;
  int d = (b * b - 4 * a * c);
  if (d > 0) {
    int x = (-b + sqrt(d)) / 2 * a;
    int y = (-b - sqrt(d)) / 2 * a;
    cout << "Real and Distinct" << endl;
    cout << y << " " << x;
  } else if (d == 0) {
    int x = (-b) / 2 * a;
    cout << "Real and Equal" << endl;
    cout << x << " " << x;
  } else {
    cout << "Imaginary" << endl;
  }

  return 0;
}