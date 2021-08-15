#include<iostream>
using namespace std;

string buddyStrings (string A, string B) {
    if(A.empty() || B.empty()){
        return "false";
    }
    for(int i=0;i<A.size()-1;i++){
        swap(A[i],A[i+1]);
            
        if(A==B){
            return "true";
        }
        swap(A[i], A[i+1]);    
    }
    return "false";
}

int main(){
	string str1, str2;
	cin >> str1;
	cin >> str2;
	string res = buddyStrings(str1, str2);
	cout << res;
}