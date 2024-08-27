#include <iostream>
using namespace std;

int main() {
	int k,h;
	int arr[100];
	int j=0;
	int max=0;
	int sum=0;
	int ks=0,hs=0;

	cin >> k >> h;

	if(k>h) {
		max=k;
	} else {
		max=h;
	}

	for(int i=0; i<max; i++) {//µµ´Â ÃÑ È½¼ö °Çµéx
		j++;
		arr[0]=0;
		arr[1]=1;
		if(j%2==1) {//È¦¼öÀÏ °æ¿ì
			arr[j]=arr[i-1]+1;
		} else {//Â¦¼öÀÎ °æ¿ì
			arr[j] = (arr[i-2]+1)*10;
		}
		ks = arr[k];
		hs = arr[h];
		sum=ks+hs;

		cout <<"j: " << j <<"	" <<"i:" << i << "	"
		     << "arr[" << j << "]: " << arr[j]<< endl;


	}
	cout << sum;
}
