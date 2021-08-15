#include<iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	int i = 1;
	string newStr = "";
	while(i < str.length()){
		if(str[i - 1] != str[i]){
			newStr += str[i - 1];
		}
		i++;
	}
	newStr += str[str.length() - 1];
	cout << newStr;
}