#include <iostream>
using namespace std;

int main(){
	int n,k;
	int re=1;
	cin >> n >> k;
	
	for(int i=1;i<=k;i++){
		re*=n;
		
	}
	cout << re << endl;
}
