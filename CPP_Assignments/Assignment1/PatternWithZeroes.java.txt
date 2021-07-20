#include<iostream>
using namespace std;

int main() {
	int num;
	std:: cin >> num;

	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= i; j++){
			if(j == 1 || j == i){
				cout << i << "\t";
			}else{
				cout << 0 << "\t";
			}
		}
		cout << "\n";
	}
}