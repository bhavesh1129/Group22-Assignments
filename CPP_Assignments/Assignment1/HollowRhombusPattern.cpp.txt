#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin>>n;
    int i,j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++ ){
            cout << " "; 
        }
        if(i == 1 || i == n){
            for(j = 1; j <= n; j++){
                cout << "*";
            }
        }else{
            for(j = 1; j <= n; j++){
                if(j == 1 || j == n){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
}