#include <iostream>
using namespace std;

int main(){
	int year,month,day;
	int first;
	cin >> year >> month >> day ;
	first=(year + month + day)/100;
	
	if(first%2 == 0){
		cout << "���";
	}else{
		cout << "�׷�����";
	}
}
