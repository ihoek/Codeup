#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[100];
	int j=0;
	
	cin >> n;

	for(int i=n; i>=1; i--) {
		if(n%i==0) {
			arr[j]=n/i;
			j++;
		}
	}
	
	if(j==2){
		cout << "prime";
	}else{
		cout << "not prime";
	}
}
