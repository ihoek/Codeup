#include <iostream>
using namespace std;

int main(){
	int a,b;
	int arr[5]={400,340,170,100,70};
	int temp1=0,temp2=0,sum=0;
	
	cin >> a >> b;
	
	temp1=arr[a-1];
	temp2=arr[b-1];
	
	sum = temp1+temp2;
	
	if(sum>500){
		cout << "angry";
	}else{
		cout << "no angry";
	}
}
