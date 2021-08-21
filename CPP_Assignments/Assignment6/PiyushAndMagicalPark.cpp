#include<iostream>
using namespace std;\

int main(){
	int rows, col, minStrength, currStrength;
	cin >> rows >> col >> minStrength >> currStrength;
	char park[100][100];
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < col; j++){
			cin >> park[i][j];
		}
	}

	for(int i = 0; i < rows && currStrength >= minStrength; i++){
		for(int j = 0; j < col && currStrength >= minStrength; j++){
			if(j != 0){
				currStrength--;
			}
			if(park[i][j] == '*'){
				currStrength += 5;
			}
			else if(park[i][j] == '.'){
				currStrength -= 2;
			}
			else if(park[i][j] == '#'){
				break;
			}
		}
	}

	currStrength < minStrength ? cout << "No" : cout << "Yes\n" << currStrength;
	return 0;
}