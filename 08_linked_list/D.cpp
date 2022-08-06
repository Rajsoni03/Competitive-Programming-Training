#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node(int data = 0, Node *next = nullptr){
			this->data = data;
			this->next = next;
		}
};
Node *head = nullptr;

// void push_front(int data){
// 	Node *n = new Node(data);
// 	n->next = head;
// 	head = n;
// }

void push_front(int data){
	head = new Node(data, head);
}

void display(){
	Node *curr = head;
	while(curr != nullptr){
		cout << curr->data << endl;
		curr = curr->next;
	}
}

int main(){
	push_front(10);
	push_front(20);
	push_front(30);
	push_front(40);
	push_front(50);

	display();

	return 0;
}