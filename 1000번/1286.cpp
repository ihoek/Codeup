#include <iostream>
using namespace std;

int main() {
	int num[5];

	for(int i=0; i<5; i++) {
		cin >> num[i];
	}
	int max=num[0];
	int min=num[0];
	for(int i=0; i<5; i++) {
		if(max<num[i]) {
			max=num[i];
		}
		if(min>num[i]) {
			min=num[i];
		}
	}
	cout << max << endl << min;
}
