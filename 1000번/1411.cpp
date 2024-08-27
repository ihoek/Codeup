#include <iostream>
using namespace std;

int main() {
	int total;
	int card[50];
	int sum1=0,sum2=0;
	
	cin >> total;
	
	for(int i=0; i<total-1; i++) {
		cin >> card[i];
		sum1+=card[i];
	}
	
	for(int i=1; i<=total; i++) {
		sum2 += i;
	}
	
	cout << sum2-sum1;

}
