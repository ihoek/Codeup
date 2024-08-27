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
	
	for(int i=n; i>=0; i--) {
		for(int j=m; j>=0; j--) {
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
}
