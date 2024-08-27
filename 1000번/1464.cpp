#include <iostream>
using namespace std;

int main() {
	int n,m;
	int temp=0;
	cin >> n >> m;
	temp=n*m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			
			cout << temp << " ";
			temp--;
		}
		
		cout << endl;
	}

}
