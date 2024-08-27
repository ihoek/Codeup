#include <iostream>
using namespace std;

int main() {
	int n;
	int number=0;
	cin >> n;
	
	for(int i=1;i<=n;i++){
		number=i;
		for(int j=1;j<=n;j++){
			cout << number << " ";
			number=number+n;
		}
		
		cout << endl;
	}

}
