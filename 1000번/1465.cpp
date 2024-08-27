#include <iostream>
using namespace std;

int main() {
	int n,m;
	int arr[100][100];

	cin >> n >> m;

	int temp=1;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			arr[i][j]=temp;
			temp++;
		}
	}
	
	for(int i=n-1;i>=0;i--){
		for(int j=0; j<m; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


}
