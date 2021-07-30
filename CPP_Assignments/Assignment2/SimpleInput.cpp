#include<iostream>
using namespace std;

int main() {
	int arr[1000],sum = 0;
	
	for(int i = 0; ; i++){
		cin >> arr[i];

		sum += arr[i];
		if(sum < 0) break;
		cout << arr[i] << endl;
	}
}