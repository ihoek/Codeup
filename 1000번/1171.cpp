#include <iostream>
using namespace std;

int main(){
	int grade,group,num;
	cin >> grade >> group >> num;
	
	if(group<10){
		if(num<10){
			cout <<grade<<0<<group<<0<<0<<num;
		}else if(num<100){
			cout <<grade<<0<<group<<0<<num;
		}
		else{
			cout <<grade<<0<<group<<num;
		}
	}else{
		if(num<10){
			cout <<grade<<group<<0<<0<<num;
		}else if(num<100){
			cout <<grade<<group<<0<<num;
		}else{
			cout <<grade<<group<<num;
		}
		
	}
	
}
