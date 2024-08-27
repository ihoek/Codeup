#include <iostream>
using namespace std;

int main(){
	int time,minute;
	cin >> time >> minute;
	
	if(time>0){
		if(minute>=30){
			cout << time << " " << minute-30;
		}
		else{
			cout << time-1 << " " << minute+30;
		}
	}else{
		if(minute>=30){
			cout << time << " " << minute-30;
		}
		else{
			cout << 23-time << " " << minute+30;
		}
	}
	
	
	
}
