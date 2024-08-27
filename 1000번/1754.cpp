#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
	char str1[101] ;
	char str2[101] ;

	cin >> str1 >> str2;

	if(strcmp(str1, str2) > 0) {
		cout << str2 << " " << str1 ;
	}else if(strcmp(str1, str2)==0){
		cout << 0;
	}
	else{
		cout << str1 << " " << str2 ;
	}



}
