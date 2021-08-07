#include <iostream>
using namespace std;

int main() {
    int num,k;
    cin>>num;
    cin>>k;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
   // cin>>k;  This input needs to come before input of array items so I am making changes
    int count=0;
    for(int i=0;i<num;i++){
        if(arr[i]%k == 0){
            count+=arr[i]/k;
        }else{
            count+=(arr[i]/k)+1;
        }
    }
    cout<<count<<endl;
}
