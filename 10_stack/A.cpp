#include <iostream>
using namespace std;

class stack{
	int *arr;
	int index;
	public:
		stack(int capacity){
			index = -1;
			arr = new int[capacity];
		}
		void push(int ele){
			index++;
			arr[index] = ele;
		}
		void pop(){
			index--;
		}
		int top(){
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
	cout << "size : " << s.size() << endl;
	s.push(10);
	s.push(20);
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << "size : " << s.size() << endl;
	cout << "empty : " << s.empty() << endl;
	s.pop();
	cout << "empty : " << s.empty() << endl;
	return 0;
}