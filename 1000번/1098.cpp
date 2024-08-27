#include <iostream>
using namespace std;

int main() {
	int w,h;//w가로 h세로
	int n;//testcase
	int d;//방향 : 0 가로 1 세로
	int l;//길이
	int arr[100][100];
	int x,y;
	cin >> w >> h;
	cin >> n;



	for(int i=0; i<n; i++) {
		cin >> l >> d >> x >> y;//x는 밑으로 y는 옆으로
		if(d==0) {//가로
			for(int i=0; i<l; i++) {
				arr[x][y]=1;
				y++;
			}

		} else {
			for(int i=0; i<l; i++) {
				arr[x][y]=1;
				x++;
			}
		}

	}

	for(int i=1; i<=w; i++) {
		for(int j=1; j<=h; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


}
