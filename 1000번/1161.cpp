#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b ;
	if(a%2==1){
		cout << "Ȧ��" << "+";
		
	}else{
		cout << "¦��"<< "+";
	}
	
	if(b%2==1){
		cout << "Ȧ��" << "=";
		
	}else{
		cout << "¦��"<< "=";
	}
	
	if((a%2==0) && (b%2==0)){
		cout << "¦��";
	}else if((a%2==1) && (b%2==1)) {
		cout << "¦��";
	}
	else{
		cout << "Ȧ��";
	}
}
