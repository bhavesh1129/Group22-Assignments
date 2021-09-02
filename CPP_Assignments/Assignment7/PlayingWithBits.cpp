#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int sum=0;
        int a,b;
        cin>>a>>b;
        while(a<=b)
        {
            int temp=a;
            while(temp>0)
            {
                if(temp&1==1)
                {
                    sum++;
                }
                temp=temp>>1;
            }
            a++;
        }
        cout<<sum<<endl;
    }
    return 0;
}