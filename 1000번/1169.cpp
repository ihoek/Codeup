#include <iostream>
using namespace std;

int main(){
	int year,n;
	int age;
	cin >> age;
	
	if(12-age>=0){//4 09 
		year=12-age+1;
		cout << year << " " << 3;
	}else if(age==13){
		cout << 0 << " " << 3;
	}
	else{
		year=100-(age-13);
		
		cout << year << " " << 1;
	}
}
