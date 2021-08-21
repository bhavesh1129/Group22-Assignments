#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int matrix[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>matrix[i][j];
		}
	}
	int StartRow=0,EndRow=n-1,StartCol=0,EndCol=m-1;
	while(StartCol<=EndCol && StartRow<=EndRow)
	{
		for(int i=StartCol;i<=EndCol;i++)
		{
			cout<<matrix[StartRow][i]<<", ";
		}
		StartRow++;
		for(int i=StartRow;i<=EndRow;i++)
		{
			cout<<matrix[i][EndCol]<<", ";
		}
		EndCol--;
		if (StartRow<=EndRow)  
		{
			for(int i=EndCol;i>=StartCol;i--)
			{
				cout<<matrix[EndRow][i]<<", ";
			}
			EndRow--;
		}	
		if(StartCol<=EndCol) 
		{
			for(int i=EndRow;i>=StartRow;i--)
			{
				cout<<matrix[i][StartCol]<<", ";
			}
			StartCol++;
		}	

	}
	cout<<"END"<<endl;
	return 0;
}
