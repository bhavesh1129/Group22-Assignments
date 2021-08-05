#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t>0){
        long long int n,x;
        cin>>n;
        cin>>x;
        int temp=n%x;
        if(x-temp<=temp)
            cout<<x-temp<<endl;
        else
            cout<<temp<<endl;  
        t--;
    }
}



// #include <iostream>
// using namespace std;

// int main()
// {
//     int T;
//     cin>>T;
//     while(T>0){
//         long long int num,x;
//         cin>>num;
//         cin>>x;
        
//         int disCandies=num/x;
//         int totalCandiesDist=x*disCandies;
//         int candiesLeft=num-totalCandiesDist;
//         cout<<candiesLeft<<endl;
//         T--;
//     }
// }
