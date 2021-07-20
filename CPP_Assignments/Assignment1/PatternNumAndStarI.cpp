#include<iostream>
using namespace std;

int main() {
	int num;
	std::cin >> num;

	for(int i = 0; i < num; i++){
		for(int j = 1; j <= num - i; j++){
			cout << j << " "; //for triangle
		}

		for(int j = 0; j < (2 * i - 1); j++){
			cout << "*" << " "; //for spaces
		}
		cout << "\n";
	}
}