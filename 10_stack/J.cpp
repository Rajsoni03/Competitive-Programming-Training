#include <iostream>
using namespace std;

template <typename T>
class stack{
	class Node{
		public:
			T data;
			Node *next;
			Node(T data, Node* next = nullptr) : data(data), next(next){};
	};
	int length;
	Node* head;
	public:
		stack(){
			length = 0;
			head = nullptr;
		};
		void push(T ele){
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
		T top(){
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
	stack<int> s;
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