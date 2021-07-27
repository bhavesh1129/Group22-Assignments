#include<iostream>
using namespace std;

bool isMirrorArr(int arr[], int n) {
    int temp;
    temp = 1;
    for (int i = 0; i < n; i++)
        if (i != arr[arr[i]])
            temp = 0;

    if (temp == 1)
        return true;
    else 
        return false;
}

int main() {
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (isMirrorArr(arr, n)) {
        cout << "true";
    }else {
        cout << "false";
    }
}