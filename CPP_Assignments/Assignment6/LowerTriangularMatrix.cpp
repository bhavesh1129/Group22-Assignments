#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;
	int mat[n][n];
	for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
			cin>>mat[i][j];
        }
    }
	int flag = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (mat[i][j] != 0){
               flag=1;
			}
		}
	}
	if(flag==1){
		cout<<"false"<<endl;
	}else{
		cout << "true"<<endl;
	}				 
}