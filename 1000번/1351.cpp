#include <iostream>
using namespace std;

int main() {
	int a,b;

	cin >>  a >> b;
	for(int j=a; j<=b; j++) {
		for(int i=1; i<10; i++) {
			cout << j << "*" << i << "=" << j*i << endl;
		}
	}

}
