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
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[size - 1];
    cout << max << " ";
    for (int i = size - 2; i >= 0; i--)
    {
        if (max < arr[i])
        {
            max = arr[i];
            cout << max << " ";
        }
    }
}