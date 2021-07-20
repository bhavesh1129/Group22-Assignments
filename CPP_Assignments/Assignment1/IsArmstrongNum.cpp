#include<iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num, sum = 0, elm;
	std::cin >> num;

	int countDigits = int (log10(num) + 1);
	elm = num;
	while(elm){
		int temp = elm % 10;
		sum += pow(temp, countDigits);
		elm /= 10;
	}
	 if(sum == num)
        cout << "true" << endl;
    else
        cout << "false" << endl;  
}