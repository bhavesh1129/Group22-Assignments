#include <iostream>
using namespace std;

int main() {
    long long num;
    cin>>num;
    long long arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    long long mul=1;
    for(int i=0;i<num;i++){
        mul=mul*arr[i];
    }
    
    for (int i = 0; i < num; i++) {
        cout<<mul/arr[i]<<" ";
    }
}