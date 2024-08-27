#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for(int i=1; i<=a; i++) {
		if(i==1 || i==a){
			for(int k=1;k<=a;k++){
				cout << "*";
			}
		}
		else{
			for(int j=1;j<=a;j++){
				if(j==1 || j==a){
					cout << "*";
				}else{
					cout << " ";
				}
			}
		}
		cout << endl;
	}

}
