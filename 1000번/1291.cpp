#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a,b,c;
	int max_n;
	int temp=0;
	cin >> a >> b >> c;
	
	max_n=max(max(a,b),c);
	
	
	for(int i=1;i<=max_n;i++){
		if(a%i==0 && b%i==0 && c%i==0 ){
			temp=i;
			
		}
	}
	cout << temp;
}
