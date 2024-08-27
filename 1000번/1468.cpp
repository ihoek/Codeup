#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[100][100];
	cin >> n;

	int number=1;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++){
			arr[i][j]=number;
			number++;
		}
	}
	
	for(int i=0; i<n; i++) {
		if(i%2==0) { //È¦¼öÇà 
			for(int j=0; j<n; j++) {
				cout << arr[i][j] << " ";
				
			}
			cout << endl;
		}
		else{//Â¦¼öÇà 
			for(int j=n-1; j>=0; j--) {
				cout << arr[i][j] << " ";
				
			}
			cout << endl;
		}
		
	}

}
