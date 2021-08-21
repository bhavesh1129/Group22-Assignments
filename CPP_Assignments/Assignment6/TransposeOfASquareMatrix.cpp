#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
	}
	int t;
	for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{cout<<a[i][j]<<" ";}
		cout<<endl;
	}

	return 0;
}