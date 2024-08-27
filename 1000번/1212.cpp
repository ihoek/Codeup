#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	if(((a>=b) && (a>=c)) && (a<b+c)){//a가 가장 긴 직선 
		cout << "yes";
	}
	else if(((b>=a) && (b>=c)) && (b<a+c)){
		cout << "yes";
	}
	else if(((c>=a) && (c>=a)) && (c<b+a)){
		cout << "yes";
	}else{
		cout << "no";
	}
	
}
