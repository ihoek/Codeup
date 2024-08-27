#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b ;
	if(a%2==1){
		cout << "È¦¼ö" << "+";
		
	}else{
		cout << "Â¦¼ö"<< "+";
	}
	
	if(b%2==1){
		cout << "È¦¼ö" << "=";
		
	}else{
		cout << "Â¦¼ö"<< "=";
	}
	
	if((a%2==0) && (b%2==0)){
		cout << "Â¦¼ö";
	}else if((a%2==1) && (b%2==1)) {
		cout << "Â¦¼ö";
	}
	else{
		cout << "È¦¼ö";
	}
}
