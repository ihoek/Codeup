#include <iostream>
using namespace std;

int main() {
	int length;
	int cnt=0;
	
	cin >> length;

	for(int i=1;i<length;i++){
		if(length%i==0){
			cnt++;
		}
	}
	
	cout << cnt;
	
}
