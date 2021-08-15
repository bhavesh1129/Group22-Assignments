#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
    cin >> num;
	string str[num];
	for(int i = 0; i < num; i++){
		cin >> str[i];
	}
    cout << "[";
    for(int i = 0; i < num - 1; i++){
    	cout << str[i] << ", ";
    }
    cout << str[num - 1] << "]" << endl;
}