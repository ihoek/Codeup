#include <iostream>
using namespace std;

int main() {
	int a,b;
	int sum1=0,sum2=0,cnt=0;

	cin >> a >> b;

	for(int i=a; i<=b; i++) {
		cnt++;
		if(i%2==0) { //¦���� ��� -
			sum1-=i;
			cout << "-" <<i;
		} else { //Ȧ���� ��� +
			
			if(cnt==1) {
				sum2+=i;
				cout <<i;
			} else {
				sum2+=i;
				cout << "+" <<i;
			}

		}
	}
	cout << "=" ;
	cout << sum1+sum2;

}
