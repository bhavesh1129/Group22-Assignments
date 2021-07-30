#include<iostream>
using namespace std;

int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=arr[n-1]-1;
	for(int i=n-1;i>=0;i--){
		if(max<=arr[i]){
			max=arr[i];
			cout<<max<<" ";
		}
	}
	return 0;
}