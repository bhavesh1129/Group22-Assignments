#include<iostream>
using namespace std;

int main() {
	int num;
	std:: cin >> num;
	int st = 1;
	int space = 2 * num - 3;

	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= st; j++){
			cout << j << "\t";
		}

		for(int j = 1; j <= space; j++){
			cout << "\t";
		}

		if(i == num) st--;
		for(int j = st; j >= 1; j--){
			cout << j << "\t";
		}

		st++;
		space -= 2;
		cout << "\n";
	}
}