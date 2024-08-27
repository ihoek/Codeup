#include <iostream>
using namespace std;

int main() {
	int h,r;
	cin >> h >> r;

	for(int y=1; y<=r; y++) {
		for(int i=1; i<=h*2-1; i++) {
			if(i<=h) {
				for(int j=1; j<i; j++) {
					cout << " ";
				}
				cout << "*";
			} else {
				for(int j=h*2-1; j>i; j--) {
					cout << " ";
				}
				cout << "*";
			}
			cout << endl;
		}
	}
}

