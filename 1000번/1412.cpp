#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;//¹®Àå

	getline(cin,str);

	for(int j=97; j<=122; j++) {
		int n=0;
		for(int i=0; i<str.length(); i++) {
			if(str[i]==j) {
				n++;
			}
		}
		cout <<(char) j << ":" << n << endl;
	}


}
