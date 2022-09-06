#include <iostream>
using namespace std;

template <typename T>
class Stack{
	private:
		class Node{
			public:
				T data;
				Node *next;
				Node(int data = 0, Node *next = nullptr){
					this->data = data;
					this->next = next;
				}
		};
		int len;
		Node *head;
	public:
		Stack(){
			head = nullptr;
			len = 0;
		}		
		void push(T ele){
			head = new Node(ele, head);
			len++;
		}
		void pop(){
			if (!empty()){
				Node *temp = head;
				head = head->next;
				delete temp;
			}
			else{
				cout << "Stack is Empty" << endl;
			}

		}
		T top(){
			if (!empty()){
				return head->data;
			}
			else{
				cout << "Stack is Empty" << endl;
			}
		}
		bool empty(){	
			return head == nullptr;
		}
		int size(){
			return len;
		}
};


int main(){
	Stack<char> s;

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