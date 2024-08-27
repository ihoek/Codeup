#include <iostream>
using namespace std;
int arr[10000000]={0};
int main() {
	int m,n;

	cin >> m;
	for(int i=0;i<m;i++){
		int temp;
		cin >> temp;
		arr[temp] = 1;
	}
	
	cin >> n;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		cout << arr[temp] << " ";
	}
	
}
