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
    for(int i = 0; i < num - 1; i++) {
        int min = i;
        for(int j = i + 1; j < num; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    //print
    for(int i = 0; i < num; i++){
        cout << arr[i] << endl;
    }
}