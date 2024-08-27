#include <iostream>
using namespace std;

int main() {
	int n;
	int temp=0;
	int arr[1000];

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	for(int k=0; k<n; k++) {
		temp = k;
		for(int i=0; i<n; i++) {
			cout << arr[temp] << " ";
			temp++;
			if(temp == n){
				temp=0;
			}
		}
		cout << endl;
	}


}
