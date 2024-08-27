#include <iostream>
#include <string>
using namespace std;
/*
소문자 범위 97~122
암호-3 = 원문
cin 받는거는 암호(고정) 찾고 자 하는것은 원문

공백은 32
암호의 시작은 97~122
원문의 시작은 120~122 97~199
*/
int main() {
	string str;
	string restr;
	getline(cin,str);//암호

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
