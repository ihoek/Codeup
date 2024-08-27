#include <iostream>
using namespace std;

int main(){
	int year, s;
	int n;
	cin >> year >> s ;
	
	if(s<=2){
		n=year/10000;
		cout << 100-n+13;
	}else{
		n=year/10000;
		cout << 12-n+1;
	}
}
