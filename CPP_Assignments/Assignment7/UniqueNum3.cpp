#include <iostream>
using namespace std;

int unique(int *arr,int n)
{ 
	int count[64]={0}; 
	for(int k=0;k<n;k++) 
	{ 
		int i=0;
		int num=arr[k]; 
		while(num>0)
		{
			count[i]+=(num&1); 
			i++;
			num=num>>1;        
		}
	}

	int power=1;  
	int result=0;
	for(int j=0;j<64;j++)
	{
		count[j] %=3; 
		result+=count[j]*power;
		power=power<<1; 
	}
	return result; 
}

int main()
{ 
	int arr[50];
	int n;
	cin>>n;
	for(int c=0;c<n;c++)
	{
		cin>>arr[c];
	}
	cout<<unique(arr,n);
	return 0;
}