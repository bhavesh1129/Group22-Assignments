#include<iostream>
using namespace std;

int main() {
	int num, flag = 0;
	std:: cin >> num;

	for(int i = 2; i <= num/2; i++){
		if(num % i == 0){
			cout << "Not Prime";
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout << "Prime";
	}
}