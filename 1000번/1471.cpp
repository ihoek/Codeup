#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[100][100];
	cin >> n;

	int number=1;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			arr[i][j]=number;
			number++;
		}
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(j%2==0) {
				cout << arr[j][n-1-i] << " ";
			}else{
				cout << arr[j][i] << " ";
			}
			
		}
		
		cout << endl;
	}
}
