#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int j=-1;
    for(int i=0;i<num;i++){
        if (arr[i]<1){
            j++;
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}
