#include <iostream>
using namespace std;

int main(){
	int a,shout=0;
	int time,retime;
	cin >> time >> a;
	retime=(89-time)/5+1;
	
	if((89-time)>=0){
		cout << retime+a;
	}
	
}
