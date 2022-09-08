#include <iostream>
using namespace std;

template <typename T>
class queue{
	int length;
	class Node{
		public:
		Node* next;
		T data;
		Node(T data = 0, Node* next = nullptr): data(data), next(next){}
	};
	Node* head;
	Node* tail;
	public:
		queue(){
			length = 0;
			head = tail = nullptr;
		}
		void push(T ele){
			Node* n = new Node(ele);
			if (head == nullptr){
				head = tail = n;	
			}
			else{
				tail->next = n;
				tail = tail->next;
			}
			length++;
		}
		void pop(){
			if (head != nullptr){
				Node* temp = head;
				head = head->next;
				delete temp;
				length--;
			}
			else{
				cout << "queue is empty" << endl;
			}
		}
		T top(){
			if (head != nullptr){
				return head->data;
			}
			else{
				cout << "queue is empty" << endl;	
				return -1;
			}
		}
		int size(){
			return length;
		}
		bool empty(){
			return head == nullptr;
		}
};


int main(){
	queue<int> q;

	q.push(10);
	q.push(20);
	q.push(30);
	cout << q.top() << endl; // 10
	cout << q.size() << endl; // 3
	q.pop();
	cout << q.top() << endl; // 20
	cout << q.size() << endl; // 2
	q.pop();
	q.pop();
	cout << q.top() << endl;  // -1
	cout << q.size() << endl; // 0
	return 0;
}