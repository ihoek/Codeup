#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	if((a>170) && (b>170) && (c>170)){
		cout << "PASS";
	}
	else if(a<=170){
		cout << "CRASH" << " " << a;
	}
	else if(b<=170){
		cout << "CRASH" << " " << b;
	}
	else if(c<=170){
		cout << "CRASH" << " " << c;
	}
	
}
