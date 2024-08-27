#include <iostream>
#include <cmath>
using namespace std;

//순수익=rs(=총 수익(최종 값=sum) - 총 비용(투자한 액수=a))
int main() {
	int a,b;

	cin >> a >> b;

	double n;
	double sum=a,rs=0;

	for(int i=1; i<=b; i++) {
		cin >> n;
		double num=n/100;
		if(n>=0) { //변등폭이 양수일 경우
			sum+=sum*num;
			//cout << sum*num;
		} else { //변등폭이 음수일 경우
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
