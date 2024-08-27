#include <iostream>
using namespace std;

bool isPrime(int num) {
	if (num < 2) return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	int b;
	bool flag=true;
	
	cin >> n;
	
	for(int i=2; i<n; i++) {
			if(isPrime(i)==true && isPrime(n/i)==true && (n%i==0) && flag==true) {
				cout << i << " " << n/i ;
				flag=false;
			} else if(flag==false){
				break;
			}
		
	
	}
	if(flag==true){
		cout << "wrong number";
	}
}
