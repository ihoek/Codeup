#include <iostream>
#include <cmath>
using namespace std;

//������=rs(=�� ����(���� ��=sum) - �� ���(������ �׼�=a))
int main() {
	int a,b;

	cin >> a >> b;

	double n;
	double sum=a,rs=0;

	for(int i=1; i<=b; i++) {
		cin >> n;
		double num=n/100;
		if(n>=0) { //�������� ����� ���
			sum+=sum*num;
			//cout << sum*num;
		} else { //�������� ������ ���
			sum+=sum*num;
			//cout << sum*num;
		}
		//cout << "	sum: " << sum<< endl;
	}
	rs=sum-a;
	cout << round(rs) << endl;

	if(round(rs)>0) {
		cout << "good";
	} else if(round(rs)==0) {
		cout << "same";
	} else {
		cout << "bad";
	}

}
