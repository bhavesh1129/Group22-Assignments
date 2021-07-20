#include<iostream>
using namespace std;

int main() {
    int n1,n2;
    std::cin>>n1;
    std::cin>>n2;
    
    for(int i = 1; i <= n1; i++){
        int val = (3 * i + 2);
        if(val % n2){
            cout << val << "\n";
        }else{
	    n1++;
	}
    }
}