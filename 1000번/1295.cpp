#include <iostream>
using namespace std;

int main() {
	string str;

	cin >> str;

	for(int i=0; i<str.length(); i++) {
		//cout << str[i] << endl;
		//��ҹ��� �Ǵ��ϱ�
		if(str[i]>=65 && str[i]<=90) { //�빮�� �� ��� -> �ҹ��ڷ�
			str[i]=tolower(str[i]);
		} else {
			str[i]=toupper(str[i]);
		}
	}
	cout << str;
}
