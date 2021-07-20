#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num, binaryNum, res = 0, count = 0;
	std:: cin >> num;

	while(num > 0){
		cin >> binaryNum;

		while(binaryNum > 0){
			int temp = binaryNum % 10;
			res += temp * pow(2, count++);
			binaryNum /= 10;
		}
		cout << res << endl;

		res = count = 0;
		num--;
	}
}