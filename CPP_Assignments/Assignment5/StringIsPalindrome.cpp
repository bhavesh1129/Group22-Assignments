#include<iostream>
#include <string>
using namespace std;

int main() {
	string str;
    cin >> str;
    int i = 0, count = 0;
    int j = str.length() - 1;
    while(i <= j){
        if(str[i] == str[j]){
            count++;
        }else{
            break;
        }
		i++;
		j--;
    }
    if(count >= str.length() / 2){
        cout << "true";
    }else{
        cout << "false";
    }
}