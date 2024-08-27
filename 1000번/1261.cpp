#include <iostream>
using namespace std;

int main() {
	int arr[10];
	int cnt=0;

	for(int i=0; i<10; i++) {
		cin >> arr[i];
	}

	for(int k=0; k<10; k++) {
		if(arr[k]%5==0) {
			cout << arr[k];
			cnt++;

			if(cnt==1) {
				break;
			}
		}
	}
	
	if(cnt==0) {
		cout << 0;
	}

}
