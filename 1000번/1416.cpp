#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	int num=0;
	int arr[10000];

	cin >> n;

	if(n==0) {
		cout << 0;
	} else if(n==1) {
		cout << 1;
	} else {
		int i=0;
		while(n !=0) {
			if(n%2==1) {
				arr[i]=1;
			} else {
				arr[i]=0;
			}
			n /=2;
			i++;
		}	
		for(int j=i-1;j>=0;j--){
			cout << arr[j];
		}
	}
	

}
