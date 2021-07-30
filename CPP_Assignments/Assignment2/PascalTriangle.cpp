#include <iostream>
using namespace std;
		
int main() {
	int num, val = 1;
	cin >> num;
	for (int i = 0; i < num; i++) {
		//for trailing spaces
		for (int j = 1; j <= num - i; j++)
			cout << "  ";

    	for (int j = 0; j <= i; j++) {
			//for digits
			if (j == 0 || i == 0)
        		val = 1;
      		else
       			val = val * (i - j + 1) / j;

    	cout << val << "   ";
    	}
    cout << endl;
  	}
}