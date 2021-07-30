#include<iostream>
using namespace std;

int main() {
	int num, carNum, sumOdd = 0, sumEven = 0;
	std:: cin >> num;

	while(num > 0){
		cin >> carNum;

		while(carNum > 0){
			int temp = carNum % 10;
			if(temp % 2 != 0){
				sumOdd += temp;
			}else{
				sumEven += temp;
			}
			carNum /= 10;
		}
		if(sumOdd % 3 == 0 || sumEven % 4 == 0){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
		num--;
		sumOdd = sumEven = 0;
	}
}