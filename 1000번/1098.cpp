#include <iostream>
using namespace std;

int main() {
	int w,h;//w���� h����
	int n;//testcase
	int d;//���� : 0 ���� 1 ����
	int l;//����
	int arr[100][100];
	int x,y;
	cin >> w >> h;
	cin >> n;



	for(int i=0; i<n; i++) {
		cin >> l >> d >> x >> y;//x�� ������ y�� ������
		if(d==0) {//����
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
