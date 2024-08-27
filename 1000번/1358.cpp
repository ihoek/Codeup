#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for(int i=1; i<=(a+1)/2; i++) {
		for(int j=(a-1)/2; j>=i; j--) {
			cout << " ";
		}
		for(int k=1; k<=i*2-1; k++) {
			cout << "*";
		}
		cout << endl;
	}



}
