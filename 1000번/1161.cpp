#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b ;
	if(a%2==1){
		cout << "�汝�" << "+";
		
	}else{
		cout << "礎熱"<< "+";
	}
	
	if(b%2==1){
		cout << "�汝�" << "=";
		
	}else{
		cout << "礎熱"<< "=";
	}
	
	if((a%2==0) && (b%2==0)){
		cout << "礎熱";
	}else if((a%2==1) && (b%2==1)) {
		cout << "礎熱";
	}
	else{
		cout << "�汝�";
	}
}
