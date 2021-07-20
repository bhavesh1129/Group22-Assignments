#include<iostream>
using namespace std;

int main() {
	int num;
	std::cin >> num;

	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= i; j++){
			// for  even rows
			if(i % 2 == 0){
				if(j==1 || j == i){
					cout << 1;
				}else{
					cout << 0;
				}
				// for odd rows
			}else{
				cout << 1;
			}
		}
		cout << "\n";
	}
}