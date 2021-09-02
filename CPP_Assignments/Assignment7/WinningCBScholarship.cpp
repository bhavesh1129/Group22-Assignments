#include<iostream>
using namespace std;

long long int maxScholarship(long long int n,long long int m,long long int x,long long int y)
{
    long long int s=0,e=n,mid,ans;
	long long int result = m/x;
    while(e>=s){
      mid=(s+e)/2;
      ans=(m+(n-mid)*y)/x;

      if(ans>mid)
        {s=mid+1;
         result=mid;}
      else if(ans < mid)
        e=mid-1;
	  else {
		  return mid;
	  }

    }
    return result;
}

int main()
{
    long long int n,m,x,y;
    cin>>n>>m>>x>>y;
    cout<<maxScholarship(n,m,x,y);
}
