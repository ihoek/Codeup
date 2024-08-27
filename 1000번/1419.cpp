#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	char c[101];
	int cnt=0;
	
	cin.getline(c,101);
	

	for(int i=0; c[i] != '\0'; i++) {
		if(c[i]=='l' && c[i+1]=='o' && c[i+2]=='v' && c[i+3]=='e'){
			cnt++;
		}

		}
	cout << cnt;
}


