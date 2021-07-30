#include<iostream>
using namespace std;

int main() {
	int num, n1 = 0, n2 = 1, sum = 0;
	std:: cin >> num;

	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= i; j++){
			cout << n1 << " ";
			sum = n1 + n2;
			n1 = n2;
			n2 = sum;
		}
		cout << endl;
	}
}