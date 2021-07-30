#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int arr[num];
    //input array
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    //logic part
    for (int i = 1; i < num; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                } else {
                    break;
                }
            }
        }
    //print
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
}