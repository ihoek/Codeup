#include <iostream>
using namespace std;

int main(){
	double h,w;
	double fw=0,vw=0;
	
	cin >> h >> w;
	
	
	if(h<150){
		fw=h-100;
	}else if(h<160){
		fw=(h-150)/2+50;
	}else{
		fw=(h-100)*0.9;
	}
	
	vw=(w-fw)*100/fw;
	
	if(vw<=10){
		cout <<"정상";
	}else if(vw<=20){
		cout <<"과체중";
	}else{
		cout << "비만" ;
	}
	
}
