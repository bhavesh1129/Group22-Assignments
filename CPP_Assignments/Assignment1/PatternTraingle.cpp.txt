#include<iostream>
using namespace std;

int main() {
	int num;
	std:: cin >> num;
	int val;

	for(int i = 1; i <= num; i++){
		for(int j = num - i; j >= 1; j--){
			cout << "\t";
		}
		val = i;
		for(int j = 1; j <= i; j++){
			cout << val++ << "\t";
		}
		val -= 2;
		for(int j = 1; j <= i - 1; j++){
			cout << val-- << "\t";
		}
		cout << "\n";
	}
}