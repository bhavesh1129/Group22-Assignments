#include<iostream>
using namespace std;

int main() {
	int n1;
	cin>>n1;
	int arr1[n1];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	int n2;
	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	int n=n1>n2?n1:n2;
	int sum[n];
	int i=n1-1;
	int j=n2-1;
	int k=n-1;
	int d=0,c=0;
	while(k>=0){
		d=c;
		if(i>=0){
			d+=arr1[i];
		}
		if(j>=0){
			d+=arr2[j];
		}
		c=d/10;
		sum[k]=d%10;
		i--;
		j--;
		k--;
	}
	if(c!=0){
		cout<<c<<", ";
	}
	for(int i=0;i<n;i++){
		cout<<sum[i]<<", ";
	}
	cout<<"END";
	
	return 0;
}