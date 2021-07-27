#include <iostream>
using namespace std;

int kadane(int a[],int n)
{
    int curSum=0;
    int maxSum=0;
    for(int i=0;i<n;i++){
        curSum = curSum + a[i];
        if(curSum < 0){
            curSum = 0;
        }
        maxSum = max(curSum,maxSum);
    }
    return maxSum;
}
int cSum(int a[], int n){
    int c1 = kadane(a, n);
    int c2 = 0;
    for(int i = 0; i < n; i++){
        c2 += a[i];
        a[i] = -a[i];
    }
    c2 = c2 + kadane(a, n);
    return (c2 > c1) ? c2 : c1; 
}
int main() {
    int t;
    cin >> t;
    for(int i = 0;i < t; i++){
        int a[1000];
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        cout << cSum (a, n);
    }
    return 0;
}
