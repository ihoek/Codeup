#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,c;
	int arr[99];
	cin >> n >> c;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	
	sort(arr,arr+n);
	int cnt=0;
	for(int i=0;i<n;i++){
		cnt++;
		cout << arr[i] << " ";
		if(cnt%c==0){
			cout << endl;
		}
		
	}
	
	
}

