#include <iostream>
using namespace std;

int main() {
	int n;
	cin >>n;

	for(int i=1; i<=n*2; i++) {
		if(i<=n) {
			for(int j=1; j<=n*2; j++) {
				if((i+j)==n+1 || n+(i*2)==(i+j)){
					cout << "*";
				}else{
					cout << " ";
				}
			}
			
		} else {
			for(int j=1; j<=n*2; j++) {
				if((i+j)==(n*3)+1 || n+(j*2)==(i+j)){
					cout << "*";
				}else{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
}
/*
if(i==1 || i==a || k==1 || k==a || i==k || i+k==a+1
				|| i== (a+1)/2 || k==(a+1)/2)
	5 -> 16 6 ->13	7 ->15			
(i=1,j=5)(i=1,j=6)6,7=n+2(i*2)
(i=2,j=4)(i=2,j=7)6,9=n+4(i*2)
(i=3,j=3)(i=3,j=8)6,11=n+6(i*2)
(i=4,j=2)(i=4,j=9)6,13=n+8(i*2)
(i=5,j=1)(i=5,j=10)6,15=n+10(i*2)

(i=6,j=1)(i=6,j=10)7=n+2(j*2),16
(i=7,j=2)(i=7,j=9)9=n+4(j*2),16
(i=8,j=3)(i=8,j=8)11,16


*/

