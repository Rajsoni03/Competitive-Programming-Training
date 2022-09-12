#include <iostream>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

bool isOpen(char ch){
	return (ch=='(' || ch=='{' || ch=='[');
}
bool isClose(char ch){
	return (ch==')' || ch=='}' || ch==']');
}
int precedence(char op){
	if (isOpen(op) || isClose(op)){
		return 3;
	}
	else if (op == '*' || op == '/'){
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
		
		(!s.empty()) ? cout << infix[i]  << " -- " << s.top() << " -- " <<  postfix << endl : cout << infix[i]  << " -- " << ' ' << " -- " <<  postfix << endl;;
		if (isdigit(infix[i])){
			postfix += infix[i];
		}
		else{
			if(!s.empty() && isClose(infix[i])){
				while(!isOpen(s.top())){
					postfix += s.top();
					s.pop();
				}
				s.pop();
			}
			while(!s.empty() && !isOpen(s.top()) && precedence(s.top()) >= precedence(infix[i])){
				postfix += s.top();
				s.pop();
			}
			if (!isClose(infix[i])){
				s.push(infix[i]);
			}
		}
	}
	while(!s.empty()){
		postfix += s.top();
		s.pop();
	}
	return postfix;
}

int main(){
	string infix = "2+(3*4-5)/6";
	cout << infixToPostfix(infix);
	return 0;
}