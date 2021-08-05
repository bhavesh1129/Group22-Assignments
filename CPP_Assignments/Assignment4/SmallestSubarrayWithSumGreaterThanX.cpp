#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    int target;
    cin>>target;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int currSum = 0,minLen=num+1;
    int i=0,j=0;
    while(j<num){
        while (currSum<=target&&j<num)
            currSum+=arr[j++];
        while (currSum>target&&i<num) {
            if (j-i<minLen)
                minLen=j-i;
            currSum-=arr[i++];
        }
    }
    cout<<minLen<<endl;
}





// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int num;
//     cin>>num;
//     int arr[num];
//     for(int i=0;i<num;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int minL = num+1;
//     for(int i=0;i<num;i++){
//         int currSum=arr[i];
//         if(currSum>target) 
//             cout<<1<<endl;
        
//         for(int j=i+1;j<num;j++){
//             currSum+=arr[j];
            
//             if(currSum>target && (j-i+1<minL)){
//                 minL=j-i+1;
//             }
//         }
//     }
//     cout<<minL<<endl;
// }