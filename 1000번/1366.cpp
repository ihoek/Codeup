#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for(int i=1; i<=a; i++) {
		for(int k=1; k<=a; k++) {
			if(i==1 || i==a || k==1 || k==a || i==k || i+k==a+1
				|| i== (a+1)/2 || k==(a+1)/2) {
				cout << "*";
			} else {
				cout << " ";
			}
			
		}
		cout << endl;
	}
}
