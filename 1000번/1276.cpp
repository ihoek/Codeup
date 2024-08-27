#include <iostream>
using namespace std;

int main(){
	int n;
	int re=1;
	cin >> n ;
	
	for(int i=0;i<n;i++){
		re*=(n-i);
		
	}
	cout << re << endl;
}
