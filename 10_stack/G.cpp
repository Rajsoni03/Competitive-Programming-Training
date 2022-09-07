#include <iostream>
using namespace std;

template <typename T>
class stack{
	T *arr;
	int index;
	int capacity;
	public:
		stack(){
			index = -1;
			this->capacity = 10;
			arr = new T[capacity];
		}
		stack(int capacity){
			index = -1;
			this->capacity = capacity;
			arr = new T[capacity];
		}
		void push(T ele){
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
		T top(){
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