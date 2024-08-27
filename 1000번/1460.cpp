#include <iostream>
using namespace std;

int main() {
	int n;
	int number=0;
	cin >> n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			number++;
			cout << number << " ";
		}
		cout << endl;
	}

}
