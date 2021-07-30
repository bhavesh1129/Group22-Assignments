#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    int i,j;
    cout << "1\n";
    for(i = 1; i < n; i++){
        for(j = 0; j <= i; j++){
            if(j == 0 || j == i){
                cout << i;
            }else{
                cout << 0;
            }
        }
        cout << "\n";
    }
}