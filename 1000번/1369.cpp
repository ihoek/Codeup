#include <iostream>
using namespace std;

int main() {
	int a,n;
	cin >> a >> n;

	for(int i=1; i<=a; i++) {
		for(int k=1; k<=a; k++) {

			if(i==1 || i==a || k==1 || k==a) {
				cout << "*";
			} else if((i+k)%n==1) {
				cout << "*";
			} else if(n==1) {
				cout <<"*";
			} else {
				cout << " ";
			}

		}
		cout << endl;
	}
}

