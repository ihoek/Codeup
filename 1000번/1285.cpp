#include <iostream>
//#include <stdio.h>

using namespace std;

int main(){
	int n,n1;
	int result=0;
	char c;
	
	cin >> n;
	result = n;	
	while(true){
		cin >> c;
		
		if(c=='+'){
			cin >> n;
			result+=n;
		}
		else if(c=='-'){
			cin >> n;
			result-=n;
		}
		else if(c=='*'){
			cin >> n;
			result*=n;
		}
		else if(c=='/'){
			cin >> n;
			result/=n;
		}
		
		if(c=='='){
			cout << result;
			break;
		}
	}
}
