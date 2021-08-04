#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int arr[2*num];
    for(int i=0;i<2*num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" "<<arr[i+num]<<" ";
    }
}