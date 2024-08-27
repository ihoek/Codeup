#include <iostream>
using namespace std;

/*
0 : 갈 수 있는 곳
1 : 벽 또는 장애물
2 : 먹이(먹이에 도착하거나 더 이상 움직X -> 끝)
start -> (2,2)
*/

int main() {
	int n;
	int arr[10][10];
	int x=1,y=1;

	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			cin >> arr[i][j];
		}
	}

	cout << "---------------" <<endl;


	while(true) {
		if(arr[x][y]==0) { //0인 길 
			if(arr[x][y+1]==1) { //벽 만나기 전
				arr[x][y]=9;
				x++;
			} else {
				arr[x][y]=9;
			}
			y++;
		}
		else {
			arr[x][y]=arr[x][y];
		}
		
		//도착 break 실행 
		if(x==9 && y==9) {
			arr[x][y]=9;
			break;
		}
		if(arr[x][y]==2) {
			arr[x][y]=9;
			break;
		}

	}

	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


}
