#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	if((a<=b) && (a<=c)){//a가 가장 큰 값 
		if(b<=c) {
			cout << a << " " << b << " " << c;
		}else{
			cout << a << " " << c << " " << b;
		}
	}
	else if((b<=a) && (b<=c)){//b가 가장 큰 값 
		if(a<=c) {
			cout << b << " " << a << " " << c;
		}else{
			cout << b << " " << c << " " << a;
		}
	}
	else if((c<=b) && (c<=a)){//c가 가장 큰 값 
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
