#include <iostream>
using namespace std;

int main() {
	int n,m;

	cin >> n >> m;

	int number=0;
	for(int i=0;i<n;i++){
		number=n*m-i;
		for(int j=1;j<=m;j++){
			cout << number << " ";
			number=number-n;
		}
		cout << endl;
	}

}
