#include <iostream>
using namespace std;

int main() {
	int time,a,b;
	int cnt=0;
	cin >> time >> a >> b;

	if(89-time>=0) {
		cnt=(89-time)/5+1;
		a += cnt;
	}
	if(a>b) {
		cout << "win";
	} else if(a<b) {
		cout << "lose";
	} else {
		cout << "same";
	}


}
