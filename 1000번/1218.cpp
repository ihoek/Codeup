#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	if(c<a+b) {
		if((a==b) && (c==b)){
			cout << "���ﰢ��";
		}else if((a==b) || (a==c) || (b==c)){
			cout << "�̵�ﰢ��";
		}else if(pow(a,2)+pow(b,2)==pow(c,2)){
			cout << "�����ﰢ��";
		}else{
			cout << "�ﰢ��";		 
		}
	}else{
		cout << "�ﰢ���ƴ�";
	}
	
}
