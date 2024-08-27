#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	if(n>=4 && n<=20){
		cout << n << "th";
	}
	else{
		if(n%10==1){
			cout << n << "st";
		}
	else if(n%10==2){
		cout << n << "nd";
		}
	else if(n%10==3){
		cout << n << "rd";
		}
	else{
		cout << n << "th";
		}
	}
	
	
	
}
