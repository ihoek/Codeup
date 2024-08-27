#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int culcu(string s){
	int a=0,b=0;
	int num=0;
	string word="";
	for(auto i : s){
		if((i == '+')|| (i == '-') || (i == '*') || (i == '/')){
			if(i == '+'){
				num=1;
			}else if(i == '-'){
				num=2;
			}else if(i == '*'){
				num=3;
			}else if(i == '/'){
				num=4;
			}
			
			a=stoi(word);
			word="";
		}else{
			word = word + i;
			b=stoi(word);
		}
	}
	
	if(num==1){
		cout << a+b << endl;
	}
	else if(num==2){
		cout << a-b << endl;
	}
	else if(num==3){
		cout << a*b << endl;
	}
	else if(num==4){
		cout << a/b << endl;
	}
		
}

int main(){
	string str;
	
	cin >> str;
	culcu(str);

}
