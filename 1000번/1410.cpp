#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int lcnt=0,rcnt=0;
	
	getline(cin,str);
	
	for(int i=0; i<str.length(); i++) {
		if(str[i] == '('){
			lcnt++;
		}
		else if(str[i] == ')'){
			rcnt++;
		}
	}
	cout << lcnt << " " << rcnt;
}
