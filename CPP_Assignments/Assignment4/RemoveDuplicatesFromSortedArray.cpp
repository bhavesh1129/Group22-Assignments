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
    int k=0;
    for(int i=0;i<num-1;i++)
        if(arr[i]!=arr[i+1])
            arr[k++]=arr[i];
            
    arr[k++]=arr[num-1];
    
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}
