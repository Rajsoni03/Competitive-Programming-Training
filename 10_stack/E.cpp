#include <iostream>
using namespace std;

class stack{
	int *arr;
	int index;
	int capacity;
	bool isFull(){
		return index+1 >= capacity;
	}
	public:
		stack(int capacity){
			index = -1;
			this->capacity = capacity;
			arr = new int[capacity];
		}
		void push(int ele){
			if (this->isFull()){
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
	s.pop();
	cout << s.top() << endl;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	s.push(80);
	cout << s.top() << endl;
	return 0;
}