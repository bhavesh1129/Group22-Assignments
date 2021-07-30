#include<iostream>
using namespace std;

int main() {
	int num,dig,count = 0;
	std:: cin >> num >> dig;

	while(num > 0){
		int temp = num % 10;
		if(dig == temp) count++;
		num /= 10;
	}
	cout << count;
}