#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            if(i%2!=0){//odd pos
                if(arr[i]<arr[i-1]){
                    swap(arr[i],arr[i-1]);
                }
            }
            else{//even pos
                if(arr[i]>arr[i-1]){
                    swap(arr[i],arr[i-1]);
                }
            }
        }
        bool flag=false;
        for(int i=1;i<n;i+=2){
            if(arr[i]<arr[i-1]){
                flag=true;
                break;
            }
        }
        if(flag==false)
            cout<<"1"<<endl;
        else   
            cout<<"0"<<endl;
        cout<<endl;
        t--;
    }
}