#include <iostream>
using namespace std;

class Stack{
	private:
		int *arr;
		int curr;
		int capacity;
	public:
		Stack(int capacity){
			this->capacity = capacity;
			arr = new int[capacity];
			curr = -1;
		}		
		void push(int ele){
			if (curr+1 < capacity){
				curr++;
				arr[curr] = ele;
			}
			else{
				cout << "Stack OverFlow" << endl;
			}
		}
		void pop(){
			if (curr >= 0){
				curr--;
			}
			else{
				cout << "Stack is Empty" << endl;
			}
		}
		int top(){
			if (!empty()){
				return arr[curr];
			}
			else{
				cout << "Stack is Empty" << endl;
			}
			return -1;
		}
		bool empty(){	
			return curr == -1;
		}
		int size(){
			return curr+1;
		}
};


int main(){
	Stack s(5);

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	while(s.empty() == false){
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}