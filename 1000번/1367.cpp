#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for(int i=1; i<=a; i++) {
		for(int j=a-1; j>=i; j--) {
			cout << " ";
		}
		for(int k=1; k<=a; k++) {
			cout << "*";
		}
		cout << endl;
	}
}
