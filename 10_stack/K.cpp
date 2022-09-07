#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool ckeckPra(string str){
	stack<char> s;
	int n = str.size();
	for (int i = 0; i < n; i++){
		if(str[i]=='('){
			s.push(str[i]);
		}
		else{
			if (s.empty()) return false;
			s.pop();			
		}
	}
	return s.empty();
}

int main(){
	string str; // "((()())" "()()()" "((()))" "((()())(()()))"
	cin >> str;
	cout << ckeckPra(str);

	return 0;
}

/*
"{(})"
"[{()}]"
"{()()[]}{}[]"
"{(){}[]}"
"{([)]}"
*/