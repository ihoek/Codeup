#include <iostream>
using namespace std;

int main() {
	int a,b;
	char d;
	cin >> a >> b >> d;

	if(d=='R') {
		for(int i=1; i<=a; i++) {
			for(int j=a-1; j>=i; j--) {
				cout << " ";
			}
			for(int k=1; k<=b; k++) {
				cout << "*";
			}
			cout << endl;
		}
	} else if(d == 'L') {
		for(int i=1; i<=a; i++) {
			for(int j=1; j<i; j++) {
				cout << " ";
			}
			for(int k=1; k<=b; k++) {
				cout << "*";
			}
			
			cout << endl;
		}


	}

}
