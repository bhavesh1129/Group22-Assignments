#include<iostream>
#include<algorithm>
using namespace std;

int main () {
	string str;
	cin >> str;
	int count = 1;
    int max = 1;

    for (int i = 0; i < str.length(); i++) {
        if (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
            max = std::max(max, count);
        } else {
            count = 1;
        }
    }
    cout << max;
}