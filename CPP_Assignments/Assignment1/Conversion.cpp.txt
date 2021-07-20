#include<iostream>
using namespace std;

int main() {
	int minF, maxF, steps;
	cin >> minF >> maxF >> steps;

	for(int i = minF; i <= maxF; i = i + steps){
		float res = (5.0 / 9) * (i - 32);
		cout << i << " " << (int(res * 1000)) / 1000 << endl;
	}
}