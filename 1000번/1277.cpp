#include <iostream>
using namespace std;

int main(){
	int n,t;
	int arr[100];
	
	cin >> n;
	
	for(int i=1;i<=n;i++){
		cin >> arr[i];
		
	}
	
	cout << arr[1] << " " << arr[(n+1)/2] << " " << arr[n];
}
