#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	if((a>=b) && (a>=c)){//a가 가장 큰 값 
		if(b>=c) {
			cout << b;
		}else{
			cout << c;
		}
	}
	else if((b>=a) && (b>=c)){//b가 가장 큰 값 
		if(a>=c) {
			cout << a;
		}else{
			cout << c;
		}
	}
	else if((c>=b) && (c>=a)){//c가 가장 큰 값 
		if(b>=a) {
			cout << b;
		}else{
			cout << a;
		}
	}
}
