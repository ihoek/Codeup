#include <iostream>
using namespace std;

int main(){
	int a,b;
	int sum1=0,sum2=0;
	
	cin >> a >> b;
	
	for(int i=a;i<=b;i++){
		if(i%2==0){//¦���� ��� - 
			sum1-=i; 
		}else{//Ȧ���� ��� + 
			sum2+=i;
		}
	}
	cout << sum1+sum2;
	
}
