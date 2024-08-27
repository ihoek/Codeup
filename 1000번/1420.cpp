#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int sc[50];
	string total[50][50];

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> total[i][0] >> total[i][1];
		sc[i] = stoi(total[i][1]);
	}
	
	sort(sc,sc+n);
	/*for(int i=0;i<n;i++){ //오름차순 확인 
		cout << sc[i] <<endl;
	}*/
	
	for(int i=0;i<n;i++){
		if(sc[n-3] == stoi(total[i][1])){
			cout << total[i][0];
		}
	}
}

