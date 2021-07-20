#include<iostream>
using namespace std;

int main() {
	int num, t = 1, res = 0;
	std:: cin >> num;

	while(num != 0){
		int rem = num % 8;
		res += rem * t;
		t = t * 10;
		num /= 8;
	}
	cout << res;
}