#include<iostream>
#include<string>
#include<sstream> 
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				string xy=to_string(arr[i]).append(to_string(arr[j]));
				string yx=to_string(arr[j]).append(to_string(arr[i]));
				if(yx>xy){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<arr[i];
		}
		cout<<endl;
	}
	return 0;
}