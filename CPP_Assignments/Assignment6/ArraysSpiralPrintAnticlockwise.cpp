#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void readMatrix(int a[][10], int R, int C) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cin >> a[i][j];
    }
  }
}
void spiralPrint(int a[][10], int R, int C) {
  int startRow = 0, endRow = R - 1, startCol = 0, endCol = C - 1;
  while (startRow <= endRow && startCol <= endCol) {
    for (int i = startRow; i <= endRow; i++) {
      cout << a[i][startCol] << ", ";
    }
    startCol++;
    for (int j = startCol; j <= endCol; j++) {
      cout << a[endRow][j] << ", ";
    }
    endRow--;
    if (endCol >= startCol) {
      for (int i = endRow; i >= startRow; i--) {
        cout << a[i][endCol] << ", ";
      }
      endCol--;
    }
    if (startRow <= endRow) {
      for (int j = endCol; j >= startCol; j--) {
        cout << a[startRow][j] << ", ";
      }
      startRow++;
    }
  }
}
int main() {
  int a[10][10];
  int R, C;
  cin >> R >> C;
  readMatrix(a, R, C);
  spiralPrint(a, R, C);
  cout << "END";
  return 0;
}