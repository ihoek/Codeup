#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[1000];

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	for(int k=0; k<=1; k++) {
		for(int i=0; i<n; i++) {
			cout << arr[i] << endl;
		}
	}


}
