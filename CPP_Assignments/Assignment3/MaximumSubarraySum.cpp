#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    //input array
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    //logic part
    int maxSoFar = arr[0];
    int currMax = arr[0];
    for (int i = 1; i < num; i++)
    {
        currMax = std::max(arr[i], currMax + arr[i]);
        maxSoFar = std::max(maxSoFar, currMax);
    }
    cout << maxSoFar << endl;
}