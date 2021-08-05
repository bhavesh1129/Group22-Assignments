#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num,T;
    cin>>T;
    while(T>0){
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        for(int i=0;i<num-2;i++){
            int temp=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp;
        }
        for(int i=0;i<num;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        T--;
    }
}