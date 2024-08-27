#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[1000];
	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	for(int i=0; i<n; i++) {
		cout << i+1 << ": " ;
		for(int j=0; j<n; j++) {
			if(i==j){
				continue;
			}
			else if(arr[i]>arr[j]) {
				cout << "> ";
			}
			else if(arr[i]==arr[j]) {
				cout << "= ";
			}
			else if(arr[i]<arr[j]) {
				cout << "< ";
			}

		}
		cout << endl;
	}
}
