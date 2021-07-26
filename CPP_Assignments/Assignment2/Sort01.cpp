#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int arr[num];
	//input array elements
	for(int i = 0; i < num; i++){
		cin >> arr[i];
	}
	//logic
	for(int i = 0; i < num - 1; i++){
		for(int j = 0; j < num - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//printing the array
	for(int i = 0; i < num; i++){
		cout << arr[i] << " ";
	}
	return 0;
}