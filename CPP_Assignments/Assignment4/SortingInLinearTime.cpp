#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int i = 0;
    int j = 0;
    int k = num - 1;
    while (i <= k) {
        if (arr[i] == 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        } else if (arr[i] == 1) {
            i++;
        } else {
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k--;
        }
    }
    for (int i = 0; i < num; i++) {
        cout<<arr[i]<<endl;
    }
}