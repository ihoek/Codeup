#include <iostream>
#include <string>
using namespace std;
/*
�ҹ��� ���� 97~122
��ȣ-3 = ����
cin �޴°Ŵ� ��ȣ(����) ã�� �� �ϴ°��� ����

������ 32
��ȣ�� ������ 97~122
������ ������ 120~122 97~199
*/
int main() {
	string str;
	string restr;
	getline(cin,str);//��ȣ

	for(int i=0; i<=str.length(); i++) {
		if(str[i]>=100 && str[i]<=122) {
			restr[i]=str[i]-3;
			cout << (char)restr[i];
		} else if(str[i]==32) {
			restr[i]=str[i];
			cout << (char)restr[i];
		} else {
			restr[i]=str[i]-23;
			cout << (char)restr[i];
		}
	}

}
