#include<iostream>

using namespace std;

void replacepi(string in , size_t i) {
  //base case
  if ( in [i] == '\0') {
    return;
  }
  //recursive case

  if ( in [i] == 'p' && in [i + 1] == 'i') {

    cout << "3.14";
    replacepi( in , i + 2);

  } else {
    cout << in [i];

    replacepi( in , i + 1);
  }

}
int main() {
  int t;
  cin >> t;
  string in ;
  while (t--) {
    cin >> in ;
    replacepi( in , 0);
    cout << endl;
  }
  return 0;
}