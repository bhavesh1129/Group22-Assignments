#include<iostream>
using namespace std;

int main() {
	int num;
	std:: cin >> num;

	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= num; j++){

			if(i == 1){
				if(j == 1 || j >= num / 2 + 1){
					cout << "*";
				}else{
					cout << " ";
				}
			}else if(i <= num / 2){
				if(j == 1 || j == num / 2 + 1){
					cout << "*"; 
				}else{
					cout << " ";
				}
			}else if(i == num / 2 + 1){
				cout << "*";
			}else if(i < num){
				if(j == num / 2 + 1 || j == num){
					cout << "*"; 
				}else{
					cout << " ";
				}
			}else{
				if(j <= num / 2 + 1 || j == num){
					cout << "*"; 
				}else{
					cout << " ";
				}
			}
		}
		cout << "\n";
	}
}