#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	char c;
	
	getline(cin,str);
	
	for(int i=0;i<str.length();i++){
		c=(int)str[i]+2;
		cout << c;
	}
	cout << endl;
	
	for(int i=0;i<str.length();i++){
		c=((int)str[i]*7)%80+48;
		cout << c;
	}

}
