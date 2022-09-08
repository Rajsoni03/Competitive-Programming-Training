#include <iostream>
using namespace std;

class queue{
	int length;
	class Node{
		public:
		Node* next;
		int data;
		Node(int data = 0, Node* next = nullptr): data(data), next(next){}
	};
	Node* head;
	Node* tail;
	public:
		queue(){
			length = 0;
			head = new Node(0); // dummy node
			tail = head;
		}
		void push(int ele){
			tail->next = new Node(ele);
			tail = tail->next;
			length++;
		}
		void pop(){
			if (head->next != nullptr){
				Node* temp = head->next;
				head->next = head->next->next;
				delete temp;
				length--;
			}
			else{
				cout << "queue is empty" << endl;	
			}
		}
		int top(){
			if (head->next != nullptr){
				return head->next->data;
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
			return head->next == nullptr;
		}
};


int main(){

	queue q;

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