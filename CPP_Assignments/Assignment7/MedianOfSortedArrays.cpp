#include<iostream>
using namespace std;

int median(int arr1[],int arr2[],int n)
{
     int lo1=0,hi1=n-1;
     int lo2=0,hi2=n-1;
     int arr[2010];
     int k = 0;
       while(lo1 < n && lo2 < n ){
            if(arr1[lo1] <= arr2[lo2]){
                arr[k]=arr1[lo1];
                k++;
                lo1++;
            }else{
                arr[k] = arr2[lo2];
                k++;
                lo2++;
            }
       }
       if(lo1 == n){
           while(lo2<n){
               arr[k]=arr2[lo2];
               k++;
               lo2++;
           }
       }
       if(lo2 == n){
            while(lo1<n){
               arr[k]=arr1[lo1];
               k++;
               lo1++;
           }
       }
       return arr[n-1];
    
}

int main()
{
    int n;
    cin>>n;
    int a[1005],b[1005];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<median(a,b,n)<<endl;
    return 0;

}