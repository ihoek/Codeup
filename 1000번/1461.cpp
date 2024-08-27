#include <iostream>
using namespace std;

int main() {
	int n;
	int number=0;
	cin >> n;
	
	for(int i=0;i<n;i++){
		number=n*(i+1);
		for(int j=0;j<n;j++){
			cout << number << " ";
			number--;
		}
		
		cout << endl;
	}

}
