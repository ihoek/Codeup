#include <iostream>
using namespace std;

int main(){
	int n;
	int arr[1000];
	int max=0;
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(max<arr[i]){
			max = arr[i];
		}
	}
	cout << max;
}
