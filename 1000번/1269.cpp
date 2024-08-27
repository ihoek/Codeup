#include <iostream>
using namespace std;

int main() {
	int a,b,c,n;
	int hang[100];

	cin >> a >> b >> c >> n;
	hang[1]=a;
	for(int i=1; i<=n; i++) {
		hang[i+1]= hang[i]*b+c;
	}
	cout << hang[n];
}
