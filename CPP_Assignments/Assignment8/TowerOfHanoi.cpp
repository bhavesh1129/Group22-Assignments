#include<iostream>

using namespace std;
void help(int n, char A, char B, char C) {
  if (n == 0) return;

  help(n - 1, A, C, B);
  cout << "Moving ring " << n << " from " << A << " to " << B << "\n";
  help(n - 1, C, B, A);

}

int main() {

  int n;
  cin >> n;
  help(n, 'A', 'B', 'C');

  return 0;
}