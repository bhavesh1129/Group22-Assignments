#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
	int max_so_far = arr[0], max_ending = arr[0];

	for (int i = 1; i < n; i++)
	{

        if (arr[i] <= max_ending + arr[i]) {
            max_ending += arr[i];
        }
       
        else {
            max_ending = arr[i];
        }
		// max_ending = max_ending + arr[i];
		// if (max_ending < 0)
		// 	max_ending = 0;
		if (max_so_far < max_ending)
			max_so_far = max_ending;

		
	}
	return max_so_far;
}
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
		int result1=kadane(arr,n);
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=arr[i];
			arr[i]=-arr[i];
		}
		int result2=kadane(arr,n);
		cout<<max(result1,sum+result2)<<endl;
	}
	return 0;
}