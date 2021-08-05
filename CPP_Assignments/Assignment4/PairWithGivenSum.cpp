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
    int sum;
    cin>>sum;
    sort(arr,arr+num);
    int low=0;
    int high = num - 1;
    while(low<high){
        if(arr[low]+arr[high]==sum){
            cout<<arr[low]<<" "<<arr[high]<<endl;
        }
        arr[low]+arr[high]<sum?low++:high--;
    }
}
