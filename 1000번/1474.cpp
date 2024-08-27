#include <iostream>
using namespace std;

int main() {
	int n,m;
	int arr[100][100];
	cin >> n >> m;

	int number=n*m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			arr[i][j]=number;
			number--;
		}
	}
	
	int k=1;
	for(int i=1; i<=n; i--) {
		
		if(k%2==0) { //짝수열인 경우
			for(int j=1;j<)
		} else { //홀수열인 경우

		}
		cout << endl;
	}


}
/*
int number=0;
	for(int i=0;i<n;i++){
		number=n*m-i;
		for(int j=1;j<=m;j++){
			cout << number << " ";
			number=number-n;
		}
		cout << endl;
	}
*/
