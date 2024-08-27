#include <iostream>
using namespace std;

int main(){
	int n;
	int cnt=0;
	cin >> n;
	
	for(int i=1;i<=n;i++){
		if(i%10==1){
			cnt++;
		}
	}
	cout << cnt;
}
