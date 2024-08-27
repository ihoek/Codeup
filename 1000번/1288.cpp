#include <iostream>
using namespace std;

int factorial(int n){
	int temp=1;
	for(int i=n;i>0;i--){
		temp = temp*i;
		
	}
	return temp; 
}
int main() {
	int n,r;
	int c;
	int deno, num;
	cin >> n >> r;
	
	deno=factorial(n);
	num=factorial(r)*factorial(n-r);
	c=deno/num;
	
	cout << c;
}
