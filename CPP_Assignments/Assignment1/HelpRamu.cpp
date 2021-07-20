#include <iostream>
using namespace std;

int cost(int c1, int c2, int c[], int j, int c3) {
  int min_sum = 0;
  for (int i = 0; i < j; i++) {
    if (c2 <= c1 * c[i])
      min_sum += c2;
    else
      min_sum += c1 * c[i];
  }
  if (c3 < min_sum)
    min_sum = c3;
  return min_sum;
}

int main() {
  int test;
  cin >> test;
  while (test--) {
    int c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;
    int n_rick, m_cabs;
    cin >> n_rick >> m_cabs;
    int ric[1000], cab[1000];
    for (int i = 0; i < n_rick; i++) {
      cin >> ric[i];
    }
    for (int i = 0; i < m_cabs; i++) {
      cin >> cab[i];
    }

    int ans = 0;
    ans += cost(c1, c2, ric, n_rick, c3);
    ans += cost(c1, c2, cab, m_cabs, c3);
    if (c4 < ans)
      ans = c4;
    
    cout << ans << endl;
  }
}
