#include <iostream>
using namespace std;

int main(){
	int n;
	int arr[1000];
	int sum=0;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(arr[i]%5==0){
			sum += arr[i];
		}
	}
	cout << sum;
}
