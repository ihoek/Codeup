#include <iostream>
using namespace std;

int main(){
	int qarr[7];
	int arr[6];
	int cnt=0,bn=0;
	
	for(int i=0;i<7;i++){
		cin >> qarr[i];
	}
	for(int j=0;j<6;j++){
		cin >> arr[j];
	}
	
	for(int h=0;h<6;h++){
		for(int q=0;q<6;q++){
			if(qarr[h]==arr[q]){
				cnt++;
			}
		}
	}
	
	for(int g=0;g<6;g++){
		if(qarr[6]==arr[g]){
			bn++;
		}
	}
	
	
	if(cnt<=2){
		cout << 0;
	}
	else if(cnt==3){
		cout << 5;
	}
	else if(cnt==4){
		cout << 4;
	}
	else if(cnt==5){
		if(bn==1){
			cout << 2;
		}else{
			cout << 3;	
		}
	}else{
		cout << 1;
	}
	
	
}
