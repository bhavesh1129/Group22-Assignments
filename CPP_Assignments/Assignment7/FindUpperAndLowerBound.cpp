#include<bits/stdc++.h>
using namespace std;

int upper(int a[], int n, int key)
{
	int start=0,end=n-1;
    int mid;

    int ans=-1;

	while(start<=end)
	{
		mid=(start+end)/2;
		if(a[mid]==key)
		{
			ans=mid;
			start=mid+1;
		}
		else if(a[mid]>key)
		{
            end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	return ans;
}

int lower(int a[], int n, int key)
{
	int start=0,end=n-1;
    int mid;

    int ans=-1;

	while(start<=end)
	{
		mid=(start+end)/2;
		if(a[mid]==key)
		{
			ans=mid;
			end=mid-1;
		}
		else if(a[mid]>key)
		{
            end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	return ans;
}

int main() 
{
	int n;
	cin>>n;
	int a[n];
    for(int i=0; i<n;i++)
	{
		cin>>a[i];
	}

	int t;
	cin>>t;
	while(t!=0)
    {
		int key;
		cin>>key;
		cout<<lower(a,n,key)<<" "<<upper(a,n,key);
        cout<<endl;
		t--;
	}
	return 0;
}