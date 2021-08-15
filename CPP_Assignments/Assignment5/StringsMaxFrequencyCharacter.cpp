#include<iostream>
#include<cstring>
#include<cmath>
#include<set>
using namespace std;

int main(){
    int curr_max,main_max;
    main_max=0;

    set <char> str_set;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        str_set.insert(str[i]);
    }
    string idx;
    for(auto i:str_set){
        curr_max=0;
        
        for(int j=0;j<str.length();j++){
            if(i==str[j]){
                curr_max+=1;                
            }
            if(curr_max>main_max){
                main_max = curr_max;
                idx = i;
            }
        }
    }
    cout<<idx;
    return 0;
}

