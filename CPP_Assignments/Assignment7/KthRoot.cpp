#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        long long K,N;
        cin>>N>>K;
        long long ans=pow(N,(long double)(1)/K);
        cout<<ans<<endl;
    }
    return 0;
}