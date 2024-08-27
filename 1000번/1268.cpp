#include <iostream>
using namespace std;

int main(){
	int n;
	int arr[1000];
	int cnt=0;
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(arr[i]%2==1){
			cnt++;
		}
	}
	cout << cnt;
}
