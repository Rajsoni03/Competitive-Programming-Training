#include <iostream>
using namespace std;

template <typename T>
class Stack{
	private:
		T *arr;
		int curr;
		int capacity;
	public:
		Stack(int capacity){
			this->capacity = capacity;
			arr = new T[capacity];
			curr = -1;
		}		
		void push(T ele){
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
		T top(){
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
	Stack<char> s(1000);

	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	s.push('E');

	while(s.empty() == false){
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}