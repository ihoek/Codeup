#include <iostream>
#include <algorithm>
using namespace std;

int area(int w, int h){
	int d;
	d=w*h;
	
	return d;
}

int main() {
	int width,heigh;
	int max;
	int arr[3];
	int size = sizeof(arr) / sizeof(*arr);
	
	for(int i=0;i<3;i++){
		cin >> width >> heigh;
		arr[i] = area(width,heigh);
	}
	
	max=*max_element(arr, arr + size);
	
	cout << max;
	
}
