#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	if((a<=b) && (a<=c)){//a�� ���� ū �� 
		if(b<=c) {
			cout << a << " " << b << " " << c;
		}else{
			cout << a << " " << c << " " << b;
		}
	}
	else if((b<=a) && (b<=c)){//b�� ���� ū �� 
		if(a<=c) {
			cout << b << " " << a << " " << c;
		}else{
			cout << b << " " << c << " " << a;
		}
	}
	else if((c<=b) && (c<=a)){//c�� ���� ū �� 
		if(b<=a) {
			cout << c << " " << b << " " << a;
		}else{
			cout << c << " " << a << " " << b;
		}
	}
	else{
		cout << a << " " << b << " " << c;
	}
	
}
