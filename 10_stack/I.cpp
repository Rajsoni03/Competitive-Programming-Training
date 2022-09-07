#include <iostream>
using namespace std;

class stack{
	class Node{
		public:
			int data;
			Node *next;
			Node(int data = 0, Node* next = nullptr) : data(data), next(next){};
	};
	int length;
	Node* head;
	public:
		stack(){
			length = 0;
			head = nullptr;
		};
		void push(int ele){
			Node *n = new Node(ele);
			n->next = head;
			head = n;
			length++;
		}
		void pop(){
			if (head==nullptr){
				cout << "stack is empty" << endl;
				return;
			}
			Node *temp = head;
			head = head->next;
			delete temp;
			length--;
		}
		int top(){
			return head->data;
		}
		int size(){
			return length;
		}
		bool empty(){
			return head==nullptr;
		}	
};

int main(){
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	while(!s.empty()){
		cout << s.top() << endl;
		s.pop();
		// cout << s.size() << ' ' << s.empty() << endl;
	}

	return 0;
}