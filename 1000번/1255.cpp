#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a,b;
	cin >> a >> b;

	for(double i=a; i<=b; i+=0.01) {
		
		cout << fixed;
		cout.precision(2);
		cout << i << " ";
	}
}
