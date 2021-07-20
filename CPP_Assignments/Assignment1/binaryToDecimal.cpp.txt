#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num, count = 0, res = 0;
	std:: cin >> num;

	while(num != 0){
		int temp = num % 10;
		res += temp * pow(2, count++);
		num /= 10;
	}
	cout << res;
}