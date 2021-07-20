#include<iostream>
using namespace std;

int main() {
	int num;
	std::cin >> num;

	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= i; j++){
			cout << j; //for numbers
		}

		for(int j = num - i; j >= 1; j--){
			cout << "*"; //for stars
		}
		cout << "\n";
	}
}