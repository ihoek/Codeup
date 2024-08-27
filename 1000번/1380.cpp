#include <iostream>
using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			if(i+j == n){
				cout << i << " " << j << endl;
			}
			
		}
	}
}
