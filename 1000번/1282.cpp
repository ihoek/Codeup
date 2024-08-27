#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,cnt=0;

	cin >> n;

	for(int i=1; i<=n; i++) { //k값 고정 -가장 작은 값을 출력
		for(int j=1; j<=n; j++) { //t값 고정
			if(n-i==pow(j,2)) {
				cnt++;
				cout << i << " " << j ;
				break;
			}
		}
		if(cnt==1) {
			break;
		}
	}
}
