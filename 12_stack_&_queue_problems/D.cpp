// Tower of hanoi
#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> s[]){
	for (int i = 1; i < 4; i++){
		stack<int> temp;
		while(!s[i].empty()){
			temp.push(s[i].top());
			s[i].pop();
		}
		cout << "[Stack " << i << "] : ";
		while(!temp.empty()){
			cout << temp.top() << ' ';
			s[i].push(temp.top());
			temp.pop();
		}
		cout << endl;
	}
	cout << endl;
}

void move(int index1, int index2, stack<int> s[]){
	if (!s[index1].empty() && !s[index2].empty()){
		if (s[index1].top() < s[index2].top()){
			s[index2].push(s[index1].top());
			s[index1].pop();
		}
		else{
			s[index1].push(s[index2].top());
			s[index2].pop();	
		}
	}
	else if (s[index1].empty()){
		s[index1].push(s[index2].top());
		s[index2].pop();
	}
	else if (s[index2].empty()){
		s[index2].push(s[index1].top());
		s[index1].pop();
	}
}

void play(stack<int> s[]){
	int n = s[1].size();
	if (n%2==0){ // 4
		while(s[3].size() != n){
			move(1, 2, s);
			display(s);
			move(1, 3, s);
			display(s);
			move(2, 3, s);
			display(s);
		}
	}
	else{  // 3
		while(s[3].size() != n){
			move(1, 3, s);
			display(s);
			if (s[3].size() == n) break;
			move(1, 2, s);
			display(s);
			move(2, 3, s);
			display(s);
		}
	}
}

int main(){
	stack<int> s[4];

	s[1].push(6);
	s[1].push(5);
	s[1].push(4);
	s[1].push(3);
	s[1].push(2);
	s[1].push(1);

	cout << "Game Begin" << endl;
	display(s);
	play(s);
	cout << "You Won ##" << endl;
	return 0;
}