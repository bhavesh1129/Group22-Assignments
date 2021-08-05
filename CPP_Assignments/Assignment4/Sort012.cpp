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
    int c0=0,c1=0,c2=0;
    for(int i=0;i<num;i++){
        if(arr[i]==0) c0++;
        else if(arr[i]==1) c1++;
        else c2++;
    }
    int k=0;
    while(c0>0){
        arr[k++]=0;
        c0--;
    }
    while(c1>0){
        arr[k++]=1;
        c1--;
    }
    while(c2>0){
        arr[k++]=2;
        c2--;
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}
