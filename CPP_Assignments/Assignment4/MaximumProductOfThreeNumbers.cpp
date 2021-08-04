#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr, arr + num);
    cout << (std::max(arr[0] * arr[1] * arr[num - 1],
               arr[num - 1] * arr[num - 2] * arr[num - 3]));
}
