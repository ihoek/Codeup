#include <iostream>
using namespace std;

int main(){
	int year,month,day;
	cin >> year >> month >> day ;
	if((year - month + day)%10 == 0){
		cout << "���";
	}else{
		cout << "�׷�����";
	}
}
