#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	for(int i=1;i<=b;i++){//가로 
		for(int j=1;j<=a;j++){//세로 
			if((i==1 && j==1) || (i==1 && j==a) ||
			(i==b && j==1) || (i==b && j==a)){
				cout << "+";
			}
			else if(i==1 || i==b){
				cout << "-";
			}
			else if(j==1 || j==a){
				cout << "|";
			}
			else{
				cout << " ";
			}
			
		}
		cout << endl;
	}
}
