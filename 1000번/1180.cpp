#include <iostream>
using namespace std;

int main(){
	int n,temp=0;
	int a,b;
	cin >> n;
	
	a=n/10;
	b=n%10;
	temp=(b*10+a)*2;
	
	if(temp>=100){
		temp=temp-100;	
	}
	
	
	if(temp<=50){
		cout << temp << endl << "GOOD";
	}else{
		cout << temp << endl << "OH MY GOD";
	}
	
	
}
