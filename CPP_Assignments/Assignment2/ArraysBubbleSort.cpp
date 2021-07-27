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
    for(int i = 1; i <= num - 1; i++) {
        for(int j = 0; j < num - i; j++) {
            if(arr[j + 1] < arr[j]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //print
    for(int i = 0; i < num; i++){
        cout << arr[i] << endl;
    }
}