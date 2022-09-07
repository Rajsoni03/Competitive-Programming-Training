#include <iostream>
using namespace std;

class stack{
	int *arr;
	int index;
	int capacity;
	public:
		stack(int capacity){
			index = -1;
			this->capacity = capacity;
			arr = new int[capacity];
		}
		void push(int ele){
			if (index+1 >= capacity){
				cout << "StackOverflow" << endl;
				return;
			}
			index++;
			arr[index] = ele;
		}
		void pop(){
			if (this->empty()){
				cout << "stack is empty" << endl;
				return;
			}
			index--;
		}
		int top(){
			if (this->empty()){
				cout << "stack is empty" << endl;
				return -1;
			}
			return arr[index];
		}
		int size(){
			return index + 1;
		}
		bool empty(){
			return index == -1;
		}
};

int main(){
	stack s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	while(!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}