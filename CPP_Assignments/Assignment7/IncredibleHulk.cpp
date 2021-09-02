#include <iostream>
using namespace std;

int getithbit(int n,int i){
	return (n&(1<<i))>0?1:0;
}

int fun(int n){
	int count=0;
	for(int i=0;i<32;i++){
		if(getithbit(n,i)==1)
			count++;
	}
	return count;
}

int main() {
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		cout<<fun(n)<<endl;
	}
	return 0;
}