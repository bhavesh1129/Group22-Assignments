#include<bits/stdc++.h>
using namespace std;

long long int c;
bool is_Answer(long long int *arr,long long int n,long long int ans){
    int ca=1;
    long long int prev=arr[0];
    for(long long int i=1;i<n;i++){
        if(arr[i]-prev>=ans){
            prev=arr[i];
            ca++;
            if(ca==c)
            return true;
        }
    }
    if(ca<c)
    return false;
    return true;
}

int main() {
    long long int n;
    cin>>n>>c;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int max=a[n-1],ans=0;
    long long int si=0,ei=a[n-1];
    while(si<=ei){
        long long int mid=(si+ei)/2;
        if(is_Answer(a,n,mid)){
            ans=mid;
            si=mid+1;
        }
        else
        ei=mid-1;
    }
    cout<<ans<<endl;
	return 0;
}