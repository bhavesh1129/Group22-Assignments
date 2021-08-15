#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseWords(string s) {
    bool neww = true;
    vector <string> ans;
    string ss = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (ss.size() != 0) ans.push_back(ss);
            ss = "";
        } else {
            ss += s[i];
        }
    }
    if (ss.size() != 0) ans.push_back(ss);
    reverse(ans.begin(), ans.end());
    string ret = "";
    for (auto i : ans) {
        ret += i;
        ret += " ";
    }
    ret.pop_back();
    cout << ret;
}
int main () {
	string str;
	getline(cin,str);
    reverseWords(str);
}