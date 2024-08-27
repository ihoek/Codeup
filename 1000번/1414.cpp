#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	char c[101];
	int cnt1=0,cnt2=0;
	
	cin.getline(c,101);
	

	for(int i=0; c[i] != '\0'; i++) {
		if(tolower(c[i]) == 'c') {
			cnt1++;
		}
		if((c[i]=='c' || c[i]=='C') && (c[i+1]=='c' || c[i+1]=='C')){
			cnt2++;
		}

		}
	cout << cnt1  <<endl << cnt2;
}


