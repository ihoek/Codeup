#include <iostream>
using namespace std;

int main() {
	int k;
	int arr[10];
	
	for(int i=0; i<10; i++) {
		cin >> arr[i];
	}
	
	cin >> k;
	cout << arr[k-1];
	
}
