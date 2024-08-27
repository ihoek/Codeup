#include <iostream>
using namespace std;

int main() {
	int n,m;
	int arr[100][100];
	cin >> n >> m;

	int number=1;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			arr[i][j]=number;
			number++;
		}
	}

	for(int i=n-1; i>=0; i--) {
		if(i%2==1) {
			for(int j=m-1; j>=0; j--) {

				cout << arr[i][j] << " ";
			}
		}else{
			for(int j=0; j<m; j++) {

				cout << arr[i][j] << " ";
			}
		}

		cout << endl;
	}
}
