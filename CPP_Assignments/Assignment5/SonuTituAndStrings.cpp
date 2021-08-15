#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
    int i,t,count;
    cin>>t;
    while(t--){
        count=0;
    string sonu,titu;
    cin>>sonu>>titu;
   
    unordered_map<char,int>s;
    unordered_map<char,int>t;
    for(i=0;sonu[i]!='\0';i++)
    s[sonu[i]]++;
    for(i=0;titu[i]!='\0';i++)
    t[titu[i]]++;
    for(auto i : s){
        if(t.count(i.first)==0)
        count+=i.second;
        else
        count+=abs(i.second-t[i.first]);
    }

    for(auto i : t){
        if(s.count(i.first)==0){
            count+=i.second;
        }
    }
    
    cout<<count<<'\n';
    s.clear();
    t.clear();
}
	return 0;
}