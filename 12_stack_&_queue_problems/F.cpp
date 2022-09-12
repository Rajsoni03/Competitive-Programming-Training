#include <iostream>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

int precedence(char op){
	if (op == '*' || op == '/'){
		return 2;
	}
	else if (op == '+' || op == '-'){
		return 1;
	}
	return -1;
}

string infixToPostfix(string infix){
	string postfix = "";
	stack<char> s;

	int n = infix.size();
	for (int i = 0; i < n; i++){
		if (isdigit(infix[i])){
			postfix += infix[i];
		}

		else{
			while(!s.empty() && precedence(s.top()) >= precedence(infix[i])){
				postfix += s.top();
				s.pop();
			}
			s.push(infix[i]);
		}
	}

	while(!s.empty()){
		postfix += s.top();
		s.pop();		
	}
	
	return postfix;
}

int main(){
	string infix = "2+3*4-5/6";

	cout << infixToPostfix(infix);

	return 0;
}