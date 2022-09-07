#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	while(!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}

	stack<char> s1;
	s1.push('R');
	s1.push('A');
	s1.push('J');

	while(!s1.empty()){
		cout << s1.top();
		s1.pop();
	}

	return 0;
}