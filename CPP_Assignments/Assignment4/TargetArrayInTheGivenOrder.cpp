#include <iostream>
using namespace std;

int main() {
    //input
    int size;
    cin>>size;
    int nums[size],index[size];
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    for(int i=0;i<size;i++){
        cin>>index[i];
    }
    int target[size];
    //logic
    for(int i=0;i<size;++i){
        for(int j=0;j<i;++j){
            if(index[j]>=index[i]){
                ++index[j];
            }
        }
    }
    for(int i=0;i<size;++i){
        target[index[i]]=nums[i];
    }
    for(int i=0;i<size;i++){
        cout<<target[i]<<" ";
    }
}