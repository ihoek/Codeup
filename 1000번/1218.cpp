#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	if(c<a+b) {
		if((a==b) && (c==b)){
			cout << "Á¤»ï°¢Çü";
		}else if((a==b) || (a==c) || (b==c)){
			cout << "ÀÌµîº¯»ï°¢Çü";
		}else if(pow(a,2)+pow(b,2)==pow(c,2)){
			cout << "Á÷°¢»ï°¢Çü";
		}else{
			cout << "»ï°¢Çü";		 
		}
	}else{
		cout << "»ï°¢Çü¾Æ´Ô";
	}
	
}
