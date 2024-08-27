#include <iostream>
using namespace std;

int main() {
	string str;

	cin >> str;

	for(int i=0; i<str.length(); i++) {
		//cout << str[i] << endl;
		//대소문자 판단하기
		if(str[i]>=65 && str[i]<=90) { //대문자 일 경우 -> 소문자로
			str[i]=tolower(str[i]);
		} else {
			str[i]=toupper(str[i]);
		}
	}
	cout << str;
}
